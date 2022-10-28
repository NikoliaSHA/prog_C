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
	int count = 0;
	while (card_name[0]!='x')
	{
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
		case 'x':
			continue;
		default:
			val=atoi(card_name);
			if ((val<1)||(val>10)){
				puts("неизвестное значение");
				continue;
			}
		}
		if ((val>2)&&(val<7)){
			count++; 
			puts("счетчик увеличился");
		} else if (val>=10){
			count--;
			puts("счетчик уменьшился");
		}
		printf("Текущий счет: %i\n", count);
	}
	printf("Выход \n");
	return 0;
}