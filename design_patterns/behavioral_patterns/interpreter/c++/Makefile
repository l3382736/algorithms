CC=g++
CFLAGS=-std=c++11

all: interpreter

interpreter: main.cpp dictionary.h expression.h plus.h minus.h number.h variable.h evaluator.h
	$(CC) $(CFLAGS) $^ -o $@
