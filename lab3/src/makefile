CC=gcc
CFLAGS=-I.

all: sequential_min_max parallel_min_max

task5 : prog.c 
	$(CC) -o prog  prog.c

sequential_min_max : utils.o find_min_max utils.h find_min_max.h
	$(CC) -o sequential_min_max.out find_min_max.o utils.o sequential_min_max.c $(CFLAGS)

parallel_min_max : utils.o find_min_max utils.h find_min_max.h
	$(CC) -o parallel_min_max.out utils.o find_min_max.o parallel_min_max.c -lm $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

clean :
	rm exec_seq.out utils.o find_min_max.o sequential_min_max.out parallel_min_max.out