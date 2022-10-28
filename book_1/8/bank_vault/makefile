/* *************************
// file: ~/coding/book/prog_C/8/bank_vault/makefile
// date: 11/08/22
**************************** */
#include:
	#include <stdio.h>
	#include "encrypt.h"
	#include "checksum.h"
	
encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o

checksum.o: checksum.c
	gcc -c checksum.c -o checksum.o

libcheck.a: encrypt.o checksum.o
	ar -rcs libcheck.a encrypt.o checksum.o

bank_vault: bank_vault.c libcheck.a
	gcc bank_vault.c -I./ -L./ -lcheck -o bank_vault