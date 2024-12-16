#ifndef COCKCLIENT_H
#define COCKCLIENT_H

#include "cockTool.h"
#include "cockCrypt.h"

      
#include <unistd.h>         
#include <arpa/inet.h>     
#include <sys/socket.h>    
#include <netinet/in.h>     
#include <pthread.h>        
#include <termios.h>        
#include <ncurses.h>        

#define PASSWORD_MAX_LENGTH 50 

int cockClient(const char *net, const char* port, const char* usr);

#endif