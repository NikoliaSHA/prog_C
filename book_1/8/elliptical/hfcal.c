/* *************************
// file: ~/coding/book/prog_C/8/elliptical/hfcal.c
// date: 17/10/22
**************************** */
#include<stdio.h>
#include".includes/hfcal.h"

void display_calories(float weight, float distance, float coeff) {
    printf("Вес: %3.2f фунта\n", weight);
    printf("Расстояние: %3.2f мили\n", distance);
    printf("Сожжено Калорий: %4.2f калории\n", coeff * weight * distance);
}
