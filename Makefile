CC=gcc
CFLAGS=-I.

life: life.o 
	$(CC) -o life life.o

clean:
	rm *.o 