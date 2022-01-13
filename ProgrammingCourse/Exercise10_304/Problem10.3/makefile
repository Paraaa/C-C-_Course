#
# Makefile for SortedRandom.cpp
#

SRC := Rnd.cpp Sorting.cpp SortedRandom.cpp Rnd.h Sorting.h
OBJECTS := $(SRC:.cpp=.o)

CXX := g++
CXXFLAGS := -O3 -Wall

all: SortedRandom

SortedRandom: $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o SortedRandom

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<


clean: 
	rm *.o

