PROJ    = Driver
CC      = g++
CCFLAGS = -g -ansi –Wall

SOURCES = $(PROJ).cpp BinarySearchTree.h BinarySearchTree.cpp
OBJECTS = $(PROJ).o BinarySearchTree.o

all: $(OBJECTS)
	g++ -g -ansi -Wall $(OBJECTS) -o $(PROJ).out

BinarySearchTree.o: BinarySearchTree.cpp
	g++ -g -ansi -Wall -c BinarySearchTree.cpp
	
$(PROJ).o: $(PROJ).cpp
	g++ -g -ansi -Wall -c $(PROJ).cpp 
	
clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch *#[
	clear all
	ls

run: 
	clear all
	./$(PROJ).out > output.txt
	cat output.txt
	
runv:
	clear all
	valgrind --leak-check=full --show-leak-kinds=all ./$(PROJ).out > output.txt
	cat output.txt
	
	
