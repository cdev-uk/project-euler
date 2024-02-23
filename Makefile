CFLAGS=-Wall -Wextra -Werror
CC=clang
LDLIBS=-lm -lgmp

%.exe: %.c util/*.h
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)
