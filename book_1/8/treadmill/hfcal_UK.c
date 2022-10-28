/* *************************
// file: ~/coding/book/prog_C/8/treadmill/hfcal_UK.c
// date: 19/10/22
**************************** */
#include<stdio.h>
#include<hfcal.h>

void display_calories(float weight, float distance, float coeff) {
    printf("Вес: %3.2f кг\n", weight);
    printf("Расстояние: %3.2f км\n", distance);
    printf("Сожжено Калорий: %4.2f калории\n", coeff * weight * distance);
}
