/* *************************
// file: ~/coding/book/prog_C/4/miniMax.c
// date: 22/05/22
**************************** */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
    {
        printf("Значение INT_MAX равно %d\n", INT_MAX);
        printf("Значение INT_MIN равно %d\n", INT_MIN);
        printf("int занимает %li байт\n", sizeof(int));

        printf("Значение SHRT_MAX равно %d\n", SHRT_MAX);
        printf("Значение SHRT_MIN равно %d\n", SHRT_MIN);
        printf("int занимает %li байт\n", sizeof(short));

        printf("Значение LONG_MAX равно %ld\n", LONG_MAX);
        printf("Значение LONG_MIN равно %ld\n", LONG_MIN);
        printf("long занимает %li байт\n", sizeof(long));

        printf("Значение CHAR_MAX равно %d\n", CHAR_MAX);
        printf("Значение CHAR_MIN равно %d\n", CHAR_MIN);
        printf("char занимает %li байт\n", sizeof(char));

        printf("Значение FLT_MAX равно %f\n", FLT_MAX);
        printf("Значение FLT_MIN равно %.50f\n", FLT_MIN);
        printf("float занимает %li байт\n", sizeof(float));

        printf("Значение DBL_MAX равно %f\n", DBL_MAX);
        printf("Значение DBL_MIN равно %.50f\n", DBL_MIN);
        printf("double занимает %li байт\n", sizeof(double));

        return 0;
    }
