CC=g++
CFLAGS=-std=c++11

all: composite

composite: main.cc graphic.h composite_graphic.h circle.h square.h ellipse.h
	$(CC) $(CFLAGS) $^ -o $@
