CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRCS = finished_geometry_calculator.cpp finished_main.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = geometry_program

.PHONY: all build test clean

all: build

build: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)
