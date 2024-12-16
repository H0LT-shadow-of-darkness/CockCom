#ifndef COCKCRYPT_H
#define COCKCRYPT_H

#include "cockTool.h"

#include <openssl/evp.h>
#include <openssl/aes.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/conf.h>

#define SALT_LENGTH 16

void cockKeyIv(const char *password, unsigned char *key, unsigned char *iv);
int cockEncrypt(unsigned char *plaintext, int plaintext_len, unsigned char *key,unsigned char *iv, unsigned char *ciphertext);
int cockDecrypt(unsigned char *ciphertext, int ciphertext_len, unsigned char *key, unsigned char *iv, unsigned char *plaintext);

#endif