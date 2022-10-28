/*
* программа для оценивания важности карт
* выпущено под публичной лицензией
* (с)2014 Команда по блек-джеку 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char card_name[3];
	puts("Enter Name card: ");
	scanf("%2s", card_name);
	int val = 0;
	switch (card_name[0]) {
	case 'K':
	case 'Q':
	case 'J':
		val=10;
		break;
	case 'A':
		val=11;
		break;
	default:
		val=atoi(card_name);
	}
	// printf("Ценность карты: %i\n", val);
	if ((val>2)&&(val<7)) 
		puts("счетчик увеличился");
	else if (val>=10)
		puts("счетчик уменьшился");

	return 0;
}