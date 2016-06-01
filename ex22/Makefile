CFLAGS=-Wall -g -DNDEBUG

all: ex22.o ex22_main

ex22.o: ex22.c 
	cc $(CFLAGS) -c -o ex22.o ex22.c

ex22_main: ex22.o
	cc $(CFLAGS) -o ex22_main ex22_main.c ex22.o 

clean:
	rm -f ex22.o ex22_main 
