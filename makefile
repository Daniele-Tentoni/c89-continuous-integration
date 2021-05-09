CFLAGS = -Wall -Wextra -std=c89 -pedantic

all: hello
hello: hello.o
	gcc $CFLAGS math2.c main.c -o main

clean:
	rm main