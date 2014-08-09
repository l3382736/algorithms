CC=g++
CFLAGS=-std=c++11

all: observer

observer: main.cc observer.h concrete_observer.h subject.h concrete_subject.h
	$(CC) $(CFLAGS) $^ -o $@
