CC=g++
CFLAGS=-c -Wall

all: dop

dop: main.o zzz.o
	$(CC) main.o zzz.o -o dop

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

zzz.o: zzz.cpp
	$(CC) $(CFLAGS) zzz.cpp

test:
	$(CC) test.cpp zzz.cpp -o test

clean:
	rm -rf *.o dop

open:
	./dop
