CC = gcc
CFLAGS = -Wall -Wextra

all = my_program

my_program: main.o stack.o
	  $(CC) $(CFLAGS) -o my_program main.o stack.o

main.o: main.c stack.h
	  $(CC) $(CFLAGS) -c -o main.o main.c

stack.o: stack.c stack.h
	  $(CC) $(CFLAGS) -c -o stack.o stack.c

clean:
	  rm -f my_program main.o stack.o