#include "cockServer.h"

int sockets[MAXSOCKET];
pthread_t threads[MAXSOCKET];
int utenti=0;

static int cockShare(send_args frame, int except){
    for(int i=0;i<MAXSOCKET;i++){
        if(sockets[i]!=except && sockets[i]>0){
            if (send(sockets[i], &frame, sizeof(frame), 0) < 0) {
                perror("Send failed");
                exit(EXIT_FAILURE);
            }
        }
    }
    return 0;
}

static void* ScockCom(void* arg){
    int* socket = (int*)arg;
    send_args rec;
    
    while(69){ 
        if (recv(*socket, &rec, sizeof(rec), 0) < 0) {
            perror("Recv failed");
            exit(EXIT_FAILURE);
        }
        printf("===========================\n");
        printf("echo %s\n", rec.encrypted);
        printf("utenti attivi %d\n", utenti);
        printf("===========================\n");
        if(strstr(rec.encrypted, "exit()") != NULL){
            break;
        }
        cockShare(rec, *socket);
    }

    utenti--;
    if(utenti==0){
        exit(EXIT_SUCCESS);
    }
    close(*socket);
    *socket*=-1;   
}


static int ScockConnect(int *server, int *opt, struct sockaddr_in address, const char *net, int port){
    socklen_t addrlen = sizeof(address);
    if (((*server) = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    if (setsockopt((*server), SOL_SOCKET, SO_REUSEADDR, opt, sizeof(*opt)) < 0) {
        perror("setsockopt SO_REUSEADDR failed");
        close(*server);
        exit(EXIT_FAILURE);
    }
    memset(&address, 0, sizeof(address));
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr(net); 
    address.sin_port = htons(port);

    if (bind((*server), (struct sockaddr*)&address, sizeof(address))< 0) {
        perror("Bind failed");
        close((*server));
        exit(EXIT_FAILURE);
    }
    if (listen((*server), MAXSOCKET) < 0) {
        perror("listen failed");
        exit(EXIT_FAILURE);
    }

    return 0;
}

static int ScockListen(int *socket, struct sockaddr_in address){
    socklen_t addrlen = sizeof(address);
    for(int i=0;i<MAXSOCKET;i++){
        if ((sockets[i] = accept((*socket), (struct sockaddr*)&address, &addrlen))< 0) {
            perror("accept new connection failed");
            exit(EXIT_FAILURE);
        }
        utenti++;
        if (pthread_create(&threads[i], NULL, ScockCom, (void*)&sockets[i]) != 0) {
            perror("thread failed");
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}

int cockServer(const char *net, const char* port){
    int socket;
    struct sockaddr_in address;
    int opt = 1;

    printf("\033[1;34m::CockCom started::\033[0m\n");
    if(ScockConnect(&socket, &opt, address, net, atoi(port))<0){
        perror("Failed to connect socket");
        exit(EXIT_FAILURE);
    }
    if(ScockListen(&socket, address)<0){
        perror("Failed to listen socket");
        exit(EXIT_FAILURE);
    }
    printf("\n\033[1;34m::Exiting::\033[0m");
    close(socket);
}

