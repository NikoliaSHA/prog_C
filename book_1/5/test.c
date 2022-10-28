/* *************************
// file: ~/coding/book/prog_C/5/test.c
// date: 30/05/22
**************************** */
#include <stdio.h>

typedef union {
    float weight;
    int count;
}cupcake;


int main() {
    cupcake order = {2};
    printf("количество кексов: %i\n", order.count);
    return 0;
}