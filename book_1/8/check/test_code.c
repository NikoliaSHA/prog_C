/* *************************
// file: ~/coding/book/prog_C/8/check/test_code.c
// date: 11/08/22
**************************** */
#include <stdio.h>
// gcc -I../../myHeaderFiles где искать заголовочные файлы
#include "checksum.h"
#include "encrypt.h"
// где искать объектные файлы путь -L ../../mylibs файл -l (lib)check(.a) 
// gcc -I../../myHeaderFiles test_code.c -L../../mylibs -lcheck  -o test_code

int main() {
    char s[] = "Скажи друг и проходи";
    encrypt(s);
    printf("зашифровано в '%s'\n", s);
    printf("Контрольная сумма %i\n", checksum(s));
    encrypt(s);
    printf("разшифровано обратно в '%s'\n", s);
    printf("Контрольная сумма %i\n", checksum(s));
    return 0;
}