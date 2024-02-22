CFLAGS=-Wall -Wextra -Werror -std=c89
CC=clang
LDLIBS=-lm

%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)
