

CFLAGS?=-g -Wall -I ./inc/

libs=./lib/

LIBS=-L ${libs}libaprutil-1

DESTDIR=./obj/

SRCS= $(wildcard ./src/*.c) 


all:test

test:
	gcc $(CFLAGS) -o test $(SRCS)  ${LIBS}
