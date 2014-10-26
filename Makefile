#####
#
#   Adapated from EECS281 Umich Project Makefile
#
###

CXX			= g++
OBJECTS 	= prime_sequence.o prime.o main.o
EXECUTABLE 	= checkPrime

CXXFLAGS = -std=c++11 \
			-Wall -Werror -Wextra \
			-pedantic -Woverloaded-virtual 

# make release - will compile "all" with $(CXXFLAGS) and the -O3 flag
#				 also defines NDEBUG so that asserts will not check
release: CXXFLAGS += -O3 -DNDEBUG
release: all

# make debug - will compile "all" with $(CXXFLAGS) and the -g flag
#              also defines DEBUG so that "#ifdef DEBUG /*...*/ #endif" works
debug: CXXFLAGS += -g3 -DDEBUG
debug: clean all

# make profile - will compile "all" with $(CXXFLAGS) and the -pg flag
profile: CXXFLAGS += -pg
profile: clean all

# highest target; sews together all objects into executable
all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

# individual targets for objects
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

prime.o: prime.cpp prime.h
	$(CXX) $(CXXFLAGS) -c prime.cpp

prime_sequence.o: prime_sequence.cpp prime_sequence.h
	$(CXX) $(CXXFLAGS) -c prime_sequence.cpp

# make clean - remove .o files, executable, tarball
clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(SUBMIT_FILE)

