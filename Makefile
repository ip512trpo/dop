CC=g++
CFLAGS=-c -Wall

mainprog: prog

prog: main.o root.o
	$(CC) main.o root.o -o prog

main.o: ./src/main.c
	$(CC) $(CFLAGS) ./src/main.c

root.o: ./src/root.c
	$(CC) $(CFLAGS) ./src/root.c


clean:
	rm -rf *.o prog

open:
	./prog
