CC=g++
CFLAGS=-std=c++11
all: command
command: main.c light.h command.h flip_down_cmd.h flip_up_cmd.h switch.h
	$(CC) $(CFLAGS) $^ -o $@
