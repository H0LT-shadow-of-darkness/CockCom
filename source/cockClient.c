#include "cockClient.h"
//GIT TEST
typedef struct {
    int* socket; //used to pass the socket id to the thread
    pthread_t* thread; //used to cancel readThread from writeThread
    const char* user; //used to print user nickname
    WINDOW* input; //used for the input line on the window
    WINDOW* output; //used for the output line on the window
    int* line; //used to keep trace of the current printing line in the output window
    unsigned char* key; //used to encrypt and decrypt the packet
    unsigned char* iv; //used to encrypt and decrypt the packet
} thread_args;

static int CcockConnect(int *client, struct sockaddr_in server, const char *net, int port){
    if ((*client = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("\n Socket creation error \n");
        exit(EXIT_FAILURE);
    }
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(net); 
    server.sin_port = htons(port);

    if ((connect(*client, (struct sockaddr*)&server, sizeof(server)))< 0) {
        perror("\nConnection Failed \n");
        exit(EXIT_FAILURE);
    }
    return 0;
}

static void* CcockWrite(void* arg){
    FILE *file;
    file = fopen("LastChatLog.txt", "w");
    fclose(file);

    thread_args* args = (thread_args*)arg;
    int* socket = args->socket;
    pthread_t* thread = args->thread;
    const char* user = args->user;
    int* line = args->line;
    unsigned char* key = args->key;
    unsigned char* iv = args->iv;

    char encrypted[BUFFERSIZE+AES_BLOCK_SIZE];
    char msg[BUFFERSIZE-6];
    char buffer[BUFFERSIZE];

    send_args to_send;

    WINDOW *output = args->output;
    WINDOW *input = newwin(1,BUFFERSIZE,T_HEIGHT-1,0);

    while(69){
        werase(input);
        wattron(input, COLOR_PAIR(4));
        mvwprintw(input, 0, 0, "%s:",user);
        wattroff(input, COLOR_PAIR(4));  
        wrefresh(input);
        wgetnstr(input, msg, BUFFERSIZE-6);
        msg[BUFFERSIZE-6] = '\0';
        snprintf(buffer, sizeof(buffer),"%s:%s",user,msg);
        if(strstr(msg, "exit()") != NULL){
            if (send(*socket, buffer, sizeof(buffer), 0) < 0) {
                perror("Send failed");
                exit(EXIT_FAILURE);
            }
            break;
        }

    

        //crypted
        to_send.size = cockEncrypt(buffer, strlen((char*)buffer), key, iv, to_send.encrypted);
        //not crypted
        //strncpy(to_send.encrypted, buffer, sizeof(to_send.encrypted));

        if (send(*socket, &to_send, sizeof(to_send), 0) < 0) {
            perror("Send failed");
            exit(EXIT_FAILURE);
        }

        wattron(output, COLOR_PAIR(1));
        if(*line<T_HEIGHT-2){
            mvwprintw(output, *line, 0, "%s",buffer);
        }else{
            scroll(output);
            mvwprintw(output, T_HEIGHT-3, 0, "%s",buffer);
        }
        wattroff(output, COLOR_PAIR(1));
        wrefresh(output);
        (*line)++;
        file = fopen("LastChatLog.txt", "a");
        fprintf(file, "%s\n", buffer);
        fclose(file);
    }
    pthread_cancel(*thread);
    pthread_exit(NULL);
}

static void* CcockRead(void* arg){
    int len;

    FILE *file;
    file = fopen("LastChatLog.txt", "w");
    fclose(file);

    thread_args* args = (thread_args*)arg;
    int *socket = args->socket;
    const char* user = args->user;
    int* line = args->line;
    unsigned char* key = args->key;
    unsigned char* iv = args->iv;
    WINDOW* output = args->output;

    send_args rec;
    char buffer[BUFFERSIZE];

    while(69){
        if (recv(*socket, &rec, sizeof(rec), 0) < 0) {
            perror("Recv failed");
            exit(EXIT_FAILURE);
        }

        //crypted
        len = cockDecrypt(rec.encrypted, rec.size, key, iv, buffer);
        buffer[len] = '\0';
        //not crypted
        //strncpy(buffer, rec.encrypted, sizeof(buffer));

        wattron(output, COLOR_PAIR(3));
        if(*line<T_HEIGHT-2){
            mvwprintw(output, *line, 0, "%s",buffer);
        }else{
            scroll(output);
            mvwprintw(output, T_HEIGHT-3, 0, "%s",buffer);
        }
        wattroff(output, COLOR_PAIR(3));
        wrefresh(output);
        (*line)++;
        file = fopen("LastChatLog.txt", "a");
        fprintf(file, "%s\n", buffer);
        fclose(file);
    }
    pthread_exit(NULL);
}

static int CcockCom(int *socket, const char* user){
    pthread_t writeThread, readThread;
    int line = 0;
    char* password = (char*) malloc(sizeof(char)*PASSWORD_MAX_LENGTH);

    struct termios new_settings;
    tcgetattr(STDIN_FILENO, &new_settings);
    new_settings.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);

    printf("Insert Crypto password ");
    fgets(password,PASSWORD_MAX_LENGTH,stdin);

    tcgetattr(STDIN_FILENO, &new_settings);
    new_settings.c_lflag |= ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);

    thread_args* args = malloc(sizeof(thread_args));
    args->key = malloc(AES_KEYLENGTH);
    args->iv = malloc(AES_BLOCK_SIZE);
    cockKeyIv(password, args->key, args->iv);
    memset(password, 0, PASSWORD_MAX_LENGTH * sizeof(char));
    free(password);
    password = NULL;
    
    initscr();
    if (!has_colors()) {
        perror("Error no color supported");
        endwin();
        exit(EXIT_FAILURE);
    }
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK); 
    init_pair(4, COLOR_RED, COLOR_BLACK); 

    WINDOW *output = newwin(T_HEIGHT-2,BUFFERSIZE,1,0);
    scrollok(output, TRUE);
    idlok(output, TRUE);
    attron(COLOR_PAIR(2));
    mvprintw(0, 0,"::cockCommunication::");
    attroff(COLOR_PAIR(2));
    refresh();

    args->socket = socket;
    args->thread = &readThread;
    args->user = user;
    args->output = output;
    args->line = &line;
    


    if (pthread_create(&writeThread, NULL, CcockWrite, (void*)args) != 0) {
        perror("Failed to create writethread");
        exit(EXIT_FAILURE);
    }

    if (pthread_create(&readThread, NULL, CcockRead, (void*)args) != 0) {
        perror("Failed to create readthread");
        exit(EXIT_FAILURE);
    }
    
    if(pthread_join(writeThread, NULL)) {
        perror("failed to join thread");
        exit(EXIT_FAILURE);
    }

    endwin();

    free(args->key);
    args->key = NULL;
    free(args->iv);
    args->iv = NULL;
    free(args);
    args = NULL;
    
    return 0;
}

int cockClient(const char *net, const char* port, const char* usr){
    int socket;
    struct sockaddr_in server_addr;
   
    if(CcockConnect(&socket, server_addr, net, atoi(port))<0){
       perror("Failed to connect socket");
        exit(EXIT_FAILURE);
    }
    if(CcockCom(&socket, usr)<0){
        perror("Failed to start cockCom client side");
        exit(EXIT_FAILURE);
    }    
    close(socket);
    return 0;
}