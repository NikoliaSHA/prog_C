/* *************************
// file: ~/coding/book/prog_C/2/maskedRaider.c
// date: 10/05/22
**************************** */
#include <stdio.h>
#include <locale.h>


int main()
    {
        setlocale(LC_ALL, "Russian");
        char masked_raider[] = "живой!";
        char *jimmy = masked_raider;
        printf("Грабитель в маске сейчас %s Джимми сейчас %s\n", 
        masked_raider, jimmy);
        //printf("первый символ %s \n", masked_raider(1));
        masked_raider[0] = 'М';
        masked_raider[1] = 'Е';
        masked_raider[2] = 'Р';
        masked_raider[3] = 'Т';
        masked_raider[4] = 'В';
        masked_raider[5] = '!';
        printf("Грабитель в маске сейчас %s Джимми сейчас %s\n", 
        masked_raider, jimmy);
    
        return 0;
    }