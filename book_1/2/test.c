/* *************************
// file: ~/coding/book/prog_C/2/test.c
// date: 14/05/22
**************************** */
#include <stdio.h>

int main()
    {
        char str[17];
        fgets(str,10,stdin);
        printf("%s\n", str);
        return(0);
    }