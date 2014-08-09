CC=g++
CFLAGS=-std=c++11

all: visitor

visitor: main.cc visitor.h print_visitor.h element.h car.h wheel.h body.h engine.h
	$(CC) $(CFLAGS) $^ -o $@
