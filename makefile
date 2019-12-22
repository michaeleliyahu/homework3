all: run

run: main.o array.h
	gcc -o run array.o main.o

main.o: main.c array.h
	gcc -c array.c main.c 

.PHONY: clean all

clean: 
	rm -f *.o run