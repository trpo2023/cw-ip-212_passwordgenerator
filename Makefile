C = gcc
CFLAGS = -Wall -Wextra -pedantic

all: password_generator

password_generator: main.o
    $(CC) $(CFLAGS) -o password_generator main.o

main.o: main.c
     $(CC) $(CFLAGS) -c main.c

clean:
     rm -f password_generator *.o

.PHONY: clean all