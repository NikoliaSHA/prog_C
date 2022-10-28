/*
указатели и ссылки
&прлучить адрес указателя *изменить данные по адресу
*/

#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
    //printf("lat = %p\n lon = %p\n", &lat, &lon);
}

int main()
{
    int latitude = 32;
    int longitude = -64;
    //printf("latitude = %p\n longitude = %p\n", &latitude, &longitude);
    go_south_east(&latitude, &longitude);
    printf("Стоп! Теперь наши координаты: [%i, %i]\n", latitude, longitude);
    
    return 0;
}