/* *************************
// file: ~/coding/book/prog_C/2/scanf.c
// date: 09/05/22
**************************** */
#include <stdio.h>

int main()
    {
        char name[10];
        printf("Ведите ваше имя: ");
        scanf("%9s", name);
        int age;
        printf("Ведите ваш год рождения: ");
        scanf("%i", &age);
        printf("Имя: %s\n%i Года\n", name, age);
        return 0;
    }