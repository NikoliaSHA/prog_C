/* *************************
// file: ~/coding/book/prog_C/7/price_drinks.c
// date: 05/08/22
**************************** */
#include <stdio.h>
#include <stdarg.h>

enum drink {mudslide, fuzzy_navel, monkey_gland, zombie};

double price (enum drink d) {
    switch (d) {
    case mudslide:
        return 6.79;
    case fuzzy_navel:
        return 5.31;
    case monkey_gland:
        return 4.82;
    case zombie:
        return 5.89;
    }
    return 0;
}

double total(int args, ...) {
    double total = 0;
    va_list ap;
    va_start(ap, args);
    int i;
    for (i = 0; i < args; i++) {
        enum drink d = va_arg(ap, enum drink);
        total = total + price(d);
    }
    va_end(ap);
    return total;
}

int main() {
    printf("Цена равняется %0.2f\n", total(3, monkey_gland, mudslide, fuzzy_navel));
    printf("Цена равняется %0.2f\n", total(2, monkey_gland, mudslide));
    printf("Цена равняется %0.2f\n", total(1, zombie));
    return 0;
}