all: main

CFLAGS="-I."

main: main.c transparent.c
	$(CC) -o $@ main.c transparent.c

clean:
	rm -f main

.PHONY: main
