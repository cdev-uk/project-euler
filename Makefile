CFLAGS=-Wall -Wextra -Werror
CC=clang
LDLIBS=-lm -lgmp

%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)
