/* *************************
// file: ~/coding/book/prog_C/6/islands.c
// date: 30/05/22
**************************** */
#include <stdio.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
}island;

void display(island *start) {
    island *i = start;
    for(; i != NULL; i = i->next) {
        printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
    }
}

int main() {
    island un = {"premier", "09:00", "13:00", NULL};
    island deux = {"second", "09:00", "14:00", NULL};
    island trois = {"troisième", "09:00", "15:00", NULL};
    island cinq = {"cinquième", "09:00", "17:00", NULL};
    un.next = &deux;
    deux.next = &trois;
    trois.next = &cinq;
    island quatre = {"quatrième", "09:00", "16:00", NULL};
    trois.next = &quatre;
    quatre.next = &cinq;
    display(&un);
    return 0;
}