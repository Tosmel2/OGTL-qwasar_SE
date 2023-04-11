CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: my_ngram

ngram: my_ngram.c
	$(CC) $(CFLAGS) -o my_ngram my_ngram.c

clean:
	rm -f my_ngram

fclean: clean
	rm -f my_ngram