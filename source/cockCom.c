/*
 _______    ______   __       __  ________  _______   ________  _______         __                        __    __   ______   __     ________ 
|       \  /      \ |  \  _  |  \|        \|       \ |        \|       \       |  \                      |  \  |  \ /      \ |  \   |        |
| $$$$$$$\|  $$$$$$\| $$ / \ | $$| $$$$$$$$| $$$$$$$\| $$$$$$$$| $$$$$$$\      | $$____   __    __       | $$  | $$|  $$$$$$\| $$    \$$$$$$$$
| $$__/ $$| $$  | $$| $$/  $\| $$| $$__    | $$__| $$| $$__    | $$  | $$      | $$    \ |  \  |  \      | $$__| $$| $$$\| $$| $$      | $$   
| $$    $$| $$  | $$| $$  $$$\ $$| $$  \   | $$    $$| $$  \   | $$  | $$      | $$$$$$$\| $$  | $$      | $$    $$| $$$$\ $$| $$      | $$   
| $$$$$$$ | $$  | $$| $$ $$\$$\$$| $$$$$   | $$$$$$$\| $$$$$   | $$  | $$      | $$  | $$| $$  | $$      | $$$$$$$$| $$\$$\$$| $$      | $$   
| $$      | $$__/ $$| $$$$  \$$$$| $$_____ | $$  | $$| $$_____ | $$__/ $$      | $$__/ $$| $$__/ $$      | $$  | $$| $$_\$$$$| $$_____ | $$   
| $$       \$$    $$| $$$    \$$$| $$     \| $$  | $$| $$     \| $$    $$      | $$    $$ \$$    $$      | $$  | $$ \$$  \$$$| $$     \| $$   
 \$$        \$$$$$$  \$$      \$$ \$$$$$$$$ \$$   \$$ \$$$$$$$$ \$$$$$$$        \$$$$$$$  _\$$$$$$$       \$$   \$$  \$$$$$$  \$$$$$$$$ \$$   
                                                                                         |  \__| $$                                           
                                                                                          \$$    $$                                           
                                                                                           \$$$$$$                                            
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⠤⠤⠤⠤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠶⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠉⠑⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣤⣶⡶⣶⢦⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⠀⢀⣠⠀⠀⠀⠀⠀⠀⠀⠠⢤⣀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠸⡏⠁⣠⡤⠾⣆⠀⠀⠀⠀⠀⢸⡇⢠⠖⣾⣭⣀⡀⠀⠀⠀⠀⠀⠀⣀⣠⣼⡷⢶⡀⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢹⣿⠋⠈⣩⢿⡄⠀⠀⠀⠀⣾⠀⣿⠀⠀⠉⠉⠚⠻⠿⠶⠾⠿⠛⢋⠉⠁⠀⠈⡇⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⢯⣉⠟⠛⣲⢷⡀⠀⠀⠀⡿⠀⢻⣄⡀⠀⠀⠀⠀⢀⡴⠂⣀⠴⠃⠀⠀⢀⣰⠇⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠘⡏⢒⡶⠧⢬⣧⠀⠀⠀⡇⠀⢸⡏⠉⣷⣶⣲⠤⢤⣶⣯⡥⠴⣶⣶⣎⠉⢻⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠻⡷⠶⣤⣏⣙⡆⠀⠀⡇⠀⢸⡆⠀⠑⢆⣩⡿⣖⣀⣰⡶⢯⣁⡴⠃⠀⣸⡄⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢧⠾⢥⣰⣟⣹⡄⠀⣧⠀⣼⠘⢦⣠⠴⠛⠋⠉⠉⠉⠉⠛⠳⢤⣀⡴⢻⡇⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣇⣼⣋⣩⡏⣳⠀⢻⡀⢸⡴⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⣼⡇⣶⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠸⣤⢾⣡⣾⣽⣷⢼⡇⢿⡄⠀⠀⠀⠀⠠⣄⡀⢀⡀⠀⠀⠀⠀⠀⢸⠇⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣀⣿⠿⣓⣋⡥⣿⠟⢷⠘⣿⣆⠀⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⣰⡿⢀⡏⢳⡦⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣴⣯⣁⣠⣿⠁⠀⠀⠻⡄⠀⠀⠸⣎⢧⡀⠀⠀⠀⠀⠀⢰⣿⣷⣀⣼⣫⠃⠀⠀⣸⠇⠀⠀⠙⣦⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢰⠞⣍⡍⠉⠉⣿⢹⡀⠀⠀⠀⠱⡄⠀⠀⠈⠳⢽⣦⣀⠀⠀⢰⣿⣿⣟⣿⠕⠋⠀⠀⡰⠃⠀⠀⠀⣼⠃⠀⠉⢉⣭⠽⢶⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢨⡷⠋⠙⢷⡀⠹⣾⣧⠀⠀⠀⠀⠈⠦⣄⠀⠀⠀⠀⠈⠉⠉⣿⣾⠁⣼⡇⠀⠀⡠⠞⠁⠀⠀⠀⣸⠏⠀⠀⣠⡞⠉⠻⣾⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢰⡟⠀⠀⠀⠀⢻⡄⢷⠙⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡏⡏⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀⣴⠏⠀⠀⢠⡟⠀⠀⠀⠘⣷⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣾⡇⠀⠀⠀⠀⠀⢿⡘⣇⠙⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢱⠁⠐⠲⡇⢀⡀⠀⠀⠀⠀⣼⠃⠀⠀⢀⡾⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀
⠀⢠⣿⡇⠀⠀⠀⠀⠀⣨⡇⠸⡄⠈⠻⣦⡀⠀⠀⠀⠀⠀⠀⠀⢀⡏⠘⣀⣀⣀⡟⠉⣿⠀⠀⢠⡞⠁⠀⠀⠀⣸⣃⠀⠀⠀⠀⠀⠘⡏⢧⠀⠀⠀⠀⠀
⠀⣿⠀⢻⡀⠀⣠⠔⠛⠉⠻⣄⠹⡄⠀⠈⠙⠶⢤⣀⡀⠀⠀⢀⣿⣟⡻⣷⠛⠛⠋⢉⣉⣻⡖⠋⠀⠀⠀⠀⡀⡏⢉⠟⠦⣀⠀⠀⠀⢧⠈⣇⠀⠀⠀⠀
⢸⠃⠀⠈⣷⠈⢁⡄⠀⠀⠀⠘⢦⠘⣦⠀⠀⠀⠀⠈⠫⣭⣽⠟⠁⠈⢳⠈⡇⠀⠀⠀⠈⠉⠙⣷⠀⠀⠀⠀⢸⡽⠃⠀⠀⠈⡀⠀⠀⠘⢧⡸⡆⠀⠀⠀
⢸⠀⠀⠀⠁⠀⡞⠀⠀⠀⠀⠀⠘⣇⠈⢳⡀⠀⠀⠀⣠⣾⡌⣆⠀⠀⢸⠀⣧⣀⣹⠤⣶⡀⢀⣿⠀⠀⠀⠀⣾⠁⠀⠀⠀⠀⣇⠀⠀⠀⠈⠈⢹⡀⠀⠀
⢸⠀⡀⠀⠀⢸⠁⠀⢀⣠⡤⠶⠒⠛⠁⠉⠉⠉⠉⠉⠁⠈⣿⠘⢦⢀⡞⢰⣇⡀⢹⡧⣄⣩⡽⠃⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⢸⡆⠀⠀⠀⠐⡄⣧⠀⠀
⢸⡀⣇⠀⠀⢸⣦⡞⢻⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠈⢷⡈⠻⣄⣾⠁⢉⡿⠁⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⢀⣠⡇⠀⠀⠀⠀⠹⣻⠀⠀
⠀⣇⢸⠀⢀⣴⣿⡇⠘⡆⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠞⠁⠀⠈⠛⣦⣿⡿⠒⢯⣀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⣀⣤⡴⢿⡉⠙⢶⣄⣀⡀⠀⠹⡄⠀
⠀⠘⣾⡇⢸⠏⠀⣧⠀⢻⡀⠀⠀⠀⣀⣠⠶⠚⠉⠀⠀⠀⠀⠀⣠⡞⠁⠀⠀⠀⠙⠳⣄⠀⠀⠀⠀⠀⠀⢀⡿⠊⠁⠀⠀⠀⢱⡄⠈⣧⠉⠓⢄⠀⢧⠀
⠀⠀⢹⡇⢸⠀⠀⠸⣇⠀⢳⡀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠿⡶⢞⣛⣛⣓⣒⣾⣶⣿⣲⣦⣤⠤⠚⠁⠀⠀⠀⠀⠀⠀⠀⢳⠀⢸⡆⠀⠀⠀⢿⡆
⠀⠀⢸⡇⠀⠀⠀⠀⠙⣷⡀⠙⣆⠀⠀⠀⠀⠀⠀⢀⣠⡾⣋⠁⡾⣱⠋⠁⠀⠀⠀⠈⠙⣮⢷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⠘⡇⠀⠀⠀⢸⡇
⠀⠀⠈⢿⡀⠀⠀⠀⠀⠈⢳⣄⠈⠱⣦⡀⣀⡠⠖⠋⡽⠛⢁⣾⡇⡇⠀⠀⠀⠀⠀⠀⠀⢸⡏⣷⠀⠰⠦⠤⢤⣤⣀⣤⠤⠴⠖⠂⡇⠀⡇⠀⠀⢀⡾⠁
⠀⠀⠀⠘⠻⢦⣄⣀⣀⣀⣀⣈⣿⠦⠤⠿⠁⠀⠀⣼⡧⠔⢛⢿⡇⣇⠀⠀⠀⠀⠀⠀⠀⠀⡇⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⡇⠀⣠⠟⠁⠀
⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⣿⣠⠴⠋⢀⣧⡸⣦⣀⣀⣀⣀⣀⣠⣼⣇⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠇⢰⠗⠋⠁⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⡀⠀⠘⠙⣻⡶⠭⠭⠭⠽⠟⠒⠛⠛⠉⠉⠑⠒⠒⠒⠒⠒⠒⠒⠋⠉⠙⠒⠉⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
github: https://github.com/H0LT-shadow-of-darkness
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "cockClient.h"
#include "cockServer.h"
#include "cockTool.h"

int main(int argc, char const* argv[]){
    const char *term = getenv("TERM");
    if (term == NULL) {
        printf("Failed to load TERM env");
        exit(EXIT_FAILURE);
    }
    if (strstr(term, "xterm-256color") == NULL) {
        printf("Using: ");
        system("echo $TERM");
        printf("Please use xterm-256color terminal");
        exit(EXIT_FAILURE);
    }
    char command[100];
    sprintf(command, "resize -s %d %d 2>/dev/null", T_HEIGHT, BUFFERSIZE);
    int resize = system(command);
    if(resize<0){
        printf("Failed to setup");
        exit(EXIT_FAILURE);
    }
    switch(*argv[1]){
        case 'h':
            srand(time(NULL));
            int color = rand() % 7 + 1;
            switch (color) {
                case 1:  //Red
                    printf("\033[1;31m"); 
                    break;
                case 2:  // Green
                    printf("\033[1;32m"); 
                    break;
                case 3:  // Yellow
                    printf("\033[1;33m"); 
                    break;
                case 4:  // Blue
                    printf("\033[1;34m"); 
                    break;
                case 5:  // Magenta
                    printf("\033[1;35m"); 
                    break;
                case 6:  // Cyan
                    printf("\033[1;36m"); 
                    break;
                case 7:  // White
                    printf("\033[1;37m"); 
                    break;
                default:
                    break;
            }
            
            printf("Welcome in cockCommunication software\n   --> ./cockCom mode netAdress port nickname <--\n   <mode> <s> to act as a server\n        <c> to act as a client\n   <netAdress> <127.0.0.1> example, to create a connection on this adress\n   <port> <8080> example, to create a connection on this port\n   <nickname> <nick1> max 5 char, use only in client case\n   when client, type exit() to quit the room\n   info:\n      -max length for words: %d char\n      -use the same password on the same room to comunicate ENJOY!\n\033[0m", (BUFFERSIZE-6));                                   
        break;
        case 's':
            if(argv[2]!=NULL && argv[3]!=NULL){
                cockServer(argv[2], argv[3]);
            }else{
                printf("Failed to load server parameters");
                exit(EXIT_FAILURE);
            }
        break;
        case 'c':
            if(argv[2]!=NULL && argv[3]!=NULL && argv[4]!=NULL && strlen(argv[4])<6){
                cockClient(argv[2], argv[3], argv[4]);
            }else{
                printf("Failed to load client parameters");
                exit(EXIT_FAILURE);
            }
        break;
        default:
            printf("Failed to load parameters");
            exit(EXIT_FAILURE);
        break;
    }   
    return 0;
}