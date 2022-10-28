/* *************************
// file: ~/coding/book/prog_C/4/encrypt.c
// date: 23/05/22
**************************** */
//#include <stdio.h>
#include "encrypt.h"

void encrypt(char *message)
    {
        char c;
        while (*message){
            *message = *message ^ 31;
            message++;
        }
    }
