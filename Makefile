CC=gcc
CFLAGS=-I.

ConwaysGameOfLife: ConwaysGameOfLife.o 
	$(CC) -o ConwaysGameOfLife ConwaysGameOfLife.o