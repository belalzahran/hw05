CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw05

Experimenting: hw05.cpp
	$(CC) $(FLAGS) hw05.cpp -o hw05 $(OBJS)
clean:
	rm *.o hw05
tar:
	tar cf hw05.tar hw05.scr Makefile hw05.cpp