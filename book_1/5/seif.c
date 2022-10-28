/* *************************
// file: ~/coding/book/prog_C/5/seif.c
// date: 26/05/22
**************************** */
#include <stdio.h>

typedef struct {
	const char *description;
	float value;
} swag;

typedef struct {
	swag *swag;
	const char *sequence;
}combination;

typedef struct {
	combination numbers;
	const char *make;
} safe;

int main() {
	swag gold = {"Золото!", 1000000.0};
	combination numbers = {&gold, "6502"};
	safe s = {numbers, "Ramacon250"};
	printf("Содержимое = %s\n", s.numbers.swag->description);
    return 0;
}