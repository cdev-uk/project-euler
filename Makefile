CFLAGS=-Weverything -Werror
CC=clang

%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $<
