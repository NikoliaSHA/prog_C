#/* *************************
#// file: ~/coding/book/prog_C/8/check/makefile
#// date: 11/08/22
#**************************** */
#include:
	#include <stdio.h>
	#include "encrypt.h"
	#include "checksum.h"
	
encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o

checksum.o: checksum.c
	gcc -c checksum.c -o checksum.o

libtestcode.a: encrypt.o checksum.o
	ar -rcs libtestcode.a encrypt.o checksum.o

test_code: test_code.c libtestcode.a
	gcc test_code.c -I./ -L./ -ltestcode -o test_code