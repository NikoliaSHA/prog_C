/* *************************
// file: ~/coding/book/prog_C/7/dear_johns.c
// date: 04/08/22
**************************** */
#include <stdio.h>

enum response_type {DUMP, SECOND_CHANGE, MARRIAGE};
typedef struct {
    char *name;
    enum response_type type;
    } response;

void dump(response r) {
    printf("Дорогой %s,\n", r.name);
    puts("К сожедению, Ваш недавний партнер по свиданию связался с нами,");
    puts("чтобы сообщить, что Вы с ним больше не увидетесь.");
}

void second_change(response r) {
    printf("Дорогой %s,\n", r.name);
    puts("Хорошие новости: Ваш недавний партнер по свиданию попросил нас");
    puts("организовать еще одну встречу. Пожалуйста перезвоните как можно скорее.");
}

void marriage(response r) {
    printf("Дорогой %s,\n", r.name);
    puts("Поздравляем! Ваш недавний партнер по свиданию");
    puts("связался с нами с предложением о браке.");
}


void (*replies[])(response) = {dump, second_change, marriage};

int main() {
    response r[] = {
        {"Майк", DUMP}, {"Луис", SECOND_CHANGE}, 
        {"Мэттью", SECOND_CHANGE}, {"Уильям", MARRIAGE}
    };
    int i;
    for (i = 0; i < 4; i++) {
        (replies[r[i].type])(r[i]);
    }

    return 0;
}