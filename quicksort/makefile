CC = g++
TARGETS  = app
FLAGS = -std=c++11
SRC = $(wildcard ./*.cpp)

all:
	$(CC) $(SRC) $(FLAGS) -o $(TARGETS)
clean:
	rf -rf $(TARGETS) *.o
