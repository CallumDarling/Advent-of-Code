CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address -lGLEW -lGL -lglfw
LDLIBS= 

SRC = main.cpp 
OBJ = $(SRC:.cc=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -std=c++17 $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)

