CC=g++
CFLAGS=-std=c++11

all: iterator

iterator: main.cc node.h collection.h list.h list_iterator.h
	$(CC) $(CFLAGS) $^ -o $@
