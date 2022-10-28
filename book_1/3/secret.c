/* *************************
// file: ~/coding/book/prog_C/3/secret.c
// date: 18/05/22
**************************** */
#include <stdio.h>


int main()
    {
        
        char word[10];
        int i = 0;
        while (scanf("%9s", word) == 1)
        {
            i++;
            if (i % 2)
                fprintf(stdout, "%s\n", word);
            else
                fprintf(stderr, "%s\n", word);
        }
        
        return 0;
    }