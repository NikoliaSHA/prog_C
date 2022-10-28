/* *************************
// file: ~/coding/book/prog_C/8/check/encrypt.c
// date: 11/08/22
**************************** */

#include "encrypt.h"

void encrypt(char *message)
    {
        char c;
        while (*message){
            *message = *message ^ 31;
            message++;
        }
    }