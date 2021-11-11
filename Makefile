# Name: Colin Weatherly
# Date: 11/11/21
# File: Makefile

CC=g++

DEBUG=-g

TARGET=test

CFLAGS=-c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)
