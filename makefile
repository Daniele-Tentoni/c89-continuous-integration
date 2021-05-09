# File used to manage dependencies between c files.
# CC var is the current main compiler for .c files.

CFLAGS = -Wall -Wextra -std=c89 -pedantic

all: hello

hello:
	$(CC) $(CFLAGS) math2.c main.c -o main

clean:
	rm main

# Explicit a false target.
.PHONY: clean
