#include <stdio.h>

void fortune(char msg[])
{
    printf("Сообщение гласит: %s\n", msg);
    printf("msg занимает %i байтов \n", sizeof(msg));
}

int main()
{
    char quote[] = "Печенье вас полнит!";
    printf("Строка qoute хранится по адресу: %p\n", quote);
    printf("Строка qoute занимает: %i байтов \n", sizeof(quote));
    fortune(quote);
    return 0;
}
