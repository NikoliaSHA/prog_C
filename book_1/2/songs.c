/* *************************
// file: ~/coding/book/prog_C/2/songs.c
// date: 13/05/22
**************************** */
#include <stdio.h>
#include <string.h>

char tracks[][80] = {
            "Я оставил свое сердце в Гарвардской медицинчкой школе",
            "Ньюарк, Ньюарк - город, поный чудес",
            "Танец с мужланом",
            "Отсюда и до родома",
            "Девочка с острова Иводзима",
        };
void f_tarcks(char search_for[])
    {
        int i;
        for (i = 0; i < 5; i++) {
            if (strstr(tracks[i], search_for))
            printf("Песня номер %i: '%s'\n", i, tracks[i]);
        }
    }

int main()
    {
        char search_for[80];
        printf("Искать: ");
        fgets(search_for, 80, stdin);
        search_for[strlen(search_for) - 1] = '\0';
        f_tarcks(search_for);
        
        return 0;
    }