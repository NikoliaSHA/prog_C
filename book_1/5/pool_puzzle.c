/* *************************
// file: ~/coding/book/prog_C/5/pool_puzzle.c
// date: 23/05/22
**************************** */
#include <stdio.h>


struct exercise {
    const char *description; //название упражнения
    float duration; //Длительность упражнения в часах
};

struct meal {
    const char *ingredients; //Рацион питания
    float weight; //Колличество Кг.
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};


void catalog(struct fish f) {
    printf("%s - это %s c %i зубами. Ему %i года\n",
    f.name, f.species, f.teeth, f.age);
}

void label(struct fish f) {
    printf("Кличка: %s\nРазновидность: %s \
    \nРацион: %s \nКолличество пищи: %.2fкг \nОписание упражнения: %s \nПродолжительность упражнения: %.1f часов \
    \nЕму %i года, У него %i зубов\n",
    f.name, f.species, 
    f.care.food.ingredients, f.care.food.weight, f.care.exercise.description, f.care.exercise.duration, 
    f.age, f.teeth);
}

int main() {
        struct fish snappy = {"Зубастик", "пиранья", 69, 4};
        struct fish snappy2 = {"Зубастик", "пиранья", 69, 4, {{"Мясо", 0.09},{"Купаться в джакузи", 7.5}}};
        catalog(snappy);
        label(snappy2);

        return 0;
}