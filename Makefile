CC=gcc
CFLAGS=-Wall -g
TARGET=$(patsubst %.c, %, $(wildcard *.c))

.PHONY: all clean

all: $(TARGET)

%: %.c Makefile
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGET)
