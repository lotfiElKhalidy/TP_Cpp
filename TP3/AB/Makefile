CC = g++
CFLAGS = -Wall -Wextra -g

all: main

main: main.o A.o B.o
	$(CC) $(CFLAGS) -o main main.o A.o B.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

A.o: A.cpp A.hpp
	$(CC) $(CFLAGS) -c A.cpp

B.o: B.cpp B.hpp
	$(CC) $(CFLAGS) -c B.cpp

clean:
	rm -f *.o main