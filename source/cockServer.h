#ifndef COCKSERVER_H
#define COCKSERVER_H

#include "cockTool.h"
    
#include <unistd.h>      
#include <arpa/inet.h>   
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <pthread.h>     
#include <errno.h>   

#define MAXSOCKET 100

int cockServer(const char *net, const char* port);

#endif