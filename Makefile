CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -O2 -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = Algoritmo.cpp AlgoritmoFIFO.cpp AlgoritmoLRU.cpp AlgoritmoOPT.cpp Leitor.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -f $(OBJ) $(EXEC)