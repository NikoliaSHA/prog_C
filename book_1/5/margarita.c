/* *************************
// file: ~/coding/book/prog_C/5/margarita.c
// date: 27/05/22
**************************** */
#include <stdio.h>

typedef union {
    float lemon;
    int lime_pieces;
} lemon_lime;

typedef struct {
    float tequila;
    float cointreau;
    lemon_lime citrus;
} margarita;

void cocteil(margarita m) {
    printf("\n%2.1f порции текилы\n%2.1f порции куантро\n%i кусочек лайма\n",
     m.tequila, m.cointreau, m.citrus.lime_pieces);
}
void cocteil2(margarita m) {
    printf("\n%2.1f порции текилы\n%2.1f порции куантро\n%2.1f порции сока\n", 
    m.tequila, m.cointreau, m.citrus.lemon);
}

int main() {
    margarita m = {2.0, 1.0, {2}};  
    margarita b = {2.0, 1.0, {0.5}};
    margarita c = {2.0, 1.0, {.lime_pieces=1}};
    cocteil2(m);
    cocteil2(b);
    cocteil(c);
    return 0;
}