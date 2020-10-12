# make

CC := gcc
CFLAGS := -Wall

all: sctpc sctps

sctpc: sctpc.o
	$(CC) $(CFLAGS) -o $@ sctpc.c -L/usr/local/lib -lsctp

sctps: sctps.o
	$(CC) $(CFLAGS) -o $@ sctps.c -L/usr/local/lib -lsctp

clean:
	rm -f sctpc sctps *.o

