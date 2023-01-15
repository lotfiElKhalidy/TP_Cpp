SRC=Point.cpp Circle.cpp Rectangle.cpp List.cpp main.cpp
#SRC=$(wildcard *.cpp)  
EXE=prog

CXXFLAGS+=-Wall -Wextra -MMD -g
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build prog core *.gch

-include $(DEP)