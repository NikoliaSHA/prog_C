/* *************************
// file: ~/coding/book/prog_C/5/tags.c
// date: 25/05/22
**************************** */
#include <stdio.h>

typedef struct {
    float tank_capacity;
    int tank_psi;
    const char *suit_material;
}equipment;

typedef struct scuba {
    const char *name;
	equipment kit;
}diver;

void badge(diver d) {
	printf("Кличка: %s \nРезервуар: %.2f(%i) \nКостюм: %s\n",
	d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main() {
	diver randy = {"Рэнди", {5.5, 3500, "неопрен"}};
	badge(randy);
	return 0;
}