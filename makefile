# Makefile for ps1a
# Flags to save on typing all this out
CC= g++
CFLAGS= -Wall -Werror -ansi -pedantic
Boost= -lboost_unit_test_framework

# Make both projects
all: main.out ps1a

# Boost unit tests
ps1a: test.o FibLFSR.o
	$(CC) test.o FibLFSR.o -o ps1a $(Boost)

test.o: test.cpp FibLFSR.hpp
	$(CC) -c test.cpp FibLFSR.hpp $(CFLAGS)

#Main tester
main.out: main.o FibLFSR.o
	$(CC) main.o FibLFSR.o -o main.out

main.o: main.cpp FibLFSR.hpp
	$(CC) -c main.cpp $(CFLAGS)

FibLFSR.o: FibLFSR.cpp FibLFSR.hpp
	$(CC) -c FibLFSR.cpp $(CFLAGS)

# Cleanup
clean:
	rm *.o
	rm *.gch
	rm *.out
	rm ps1a
