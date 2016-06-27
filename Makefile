CC=g++
CFLAGS=-c -Wall

mainprog: prog

prog: main.o root.o
	$(CC) main.o root.o -o prog

main.o: main.c
	$(CC) $(CFLAGS) main.c

root.o: root.c
	$(CC) $(CFLAGS) root.c


clean:
	rm -rf *.o prog

open:
	./prog
