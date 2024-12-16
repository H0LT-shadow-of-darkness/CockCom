#ifndef COCKTOOL_H
#define COCKTOOL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AES_KEYLENGTH 32 
#define AES_BLOCK_SIZE 16 
#define BUFFERSIZE 128 //ALSO ACT AS terminal length
#define T_HEIGHT 35
#define AES_KEYLENGTH 32          
#define AES_BLOCK_SIZE 16         

typedef struct {
    char encrypted[BUFFERSIZE]; //used to send the encrypted message
    int size; //used to decrypt the message
} send_args;

#endif