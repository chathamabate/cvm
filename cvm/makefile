# Compiler to use.
CC = gcc

# Compiler flags to use.
CFLAGS = -Wall

default: cvm

cvm: cvm.o
	$(CC) $(CFLAGS) -o cvm cvm.o

cvm.o: cvm.c
	$(CC) $(CFLAGS) -c cvm.c

clean:
	$(RM) cvm *.o *~

