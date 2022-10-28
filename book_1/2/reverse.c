/* *************************
// file: ~/coding/book/prog_C/2/reverse.c
// date: 13/05/22
**************************** */
#include <stdio.h>
#include <string.h>
#include <locale.h>

void print_reverse(char *s)
    { 
        size_t len = strlen(s);
        char *t = s + len - 1;

        while (t >= s)
        {
            printf("%c", *t);
            t = t - 1;
        }
        puts("");
    }

int main()
    {
        //setlocale(LC_CTYPE, "Russian"); // перекодировка windows-1251 -> cp866 (OEM) при выводе
        char rewords[80];
        printf("слово: ");
        fgets(rewords, 80, stdin);
        print_reverse(rewords);
        
        return 0;
    }