CC = gcc
CFLAGS = -Wall
LDFLAGS = -lrt
SRCS = hrt.c example.c
BIN = hrt-example

all:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(BIN) $(SRCS)

clean:
	rm -f $(BIN)
