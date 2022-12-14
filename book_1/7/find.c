/* *************************
// file: ~/coding/book/prog_C/7/find.c
// date: 03/06/22
**************************** */
#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
"Уильям: одинокий мужчина, афроамериканец, с хорошим чувством юмора, любит спорт, телевизор, перекусить",
"Мэттыо: одинокий мужчина, европеец, некурящий, любит живопись, кино, театр",
"Луис: одинокий мужчина, латиноамериканец, непьющий, любит книги, театр, живопись",
"Майк: разведенный мужчина, европеец, любит грузовики, спорт и Джастина Бибера",
"Питер: одинокий мужчина, азиат, любит шахматы, тренироваться в зале и живопись",
"Джош: одинокий мужчина, еврей, любит спорт, кино и театр",
"Джед: разведенный мужчина, афроамериканец, любит театр, книги и перекусить"
};

int sports_no_bieber(char *s) {
	return strstr(s, "спорт") && !strstr(s, "Бибер");
}
int sports_or_workout(char *s) {
	return strstr(s, "спорт") || strstr(s, "Тренировки в зале");
}
int ns_theater(char *s) {
	return strstr(s, "некурящий") && strstr(s, "театр");
}
int arts_theater_or_dining(char *s) {
	return strstr(s, "живопись") || strstr(s, "театр") || strstr(s, "перекусить");
}

void find(int(*match)(char*)) {
	int i;
	puts("Результаты поиска:");
	puts("---------------------");
	for (i = 0; i < NUM_ADS ; i++) {
		if (match(ADS[i])) {
			printf("%s\n", ADS[i]);
		}
	}
	puts("----------------------");
}

int main() {
	find(sports_no_bieber);
	find(ns_theater);
	find(sports_or_workout);
	find(arts_theater_or_dining);

	return 0;
}