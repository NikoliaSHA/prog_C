/* *************************
// file: ~/coding/book/prog_C/4/message_hider.c
// date: 23/05/22
**************************** */
#include <stdio.h>
#include "encrypt.h"

int main()
    {
        char msg[80];
        while (fgets(msg, 80, stdin))
        {
            encrypt(msg);
            printf("%s", msg);
        }

        return 0;
    }