/* *************************
// file: ~/coding/book/prog_C/8/check/checksum.c
// date: 11/08/22
**************************** */
#include "../myHeaderFiles/checksum.h"

int checksum(char *message) {
    int c = 0;
    while (*message) {
        c += c ^ (int)(*message);
        message++;
    }
    
    return c;
}