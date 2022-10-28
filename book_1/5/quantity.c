/* *************************
// file: ~/coding/book/prog_C/5/quantity.c
// date: 27/05/22
**************************** 
Объединение */
#include <stdio.h>

typedef union {
    short count;
    float weight;
    float volume;
}quantity;



typedef struct {
    const char *color;
    int gears;
    int height;
}bike;
bike b = {.height=17, .gears=21};

typedef struct {
    const char *name;
    const char *country;
    quantity amount;
}fruit_order;

int main() {
    fruit_order apples = {"яблок", "Англия", .amount.weight=4.2};
    printf("Этот заказ %.1f кг %s\n", apples.amount.weight, apples.name);
    return 0;
}