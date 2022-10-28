#/* *************************
#// file: ~/coding/book/prog_C/8/treadmill/makefile
#// date: 19/10/22
# sudo ldconfig обновить библиотеки /usr/local/lib
#**************************** */
#include:
	#include <stdio.h>
	#include <hfcal.h>
	
hfcal.o: hfcal_UK.c
	gcc -c -fPIC hfcal_UK.c -o hfcal.o

treadmill.o: treadmill.c
	gcc -c treadmill.c -o treadmill.o

libhfcal.so: hfcal.o
	gcc -shared hfcal.o -o /usr/local/lib/libhfcal.so

treadmill: treadmill.o libhfcal.so
	gcc treadmill.o -lhfcal -o treadmill
