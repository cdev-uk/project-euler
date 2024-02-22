CFLAGS=-Wall -Wextra -Werror
CC=clang
LDLIBS=-lm

%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)
