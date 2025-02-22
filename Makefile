# Use g++ as the compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11


all: calc

# Link the object files into an executable named "calc"
calc: main.o mathfuncs.o randfuncs.o
	$(CXX) $(CXXFLAGS) -o calc main.o mathfuncs.o randfuncs.o

# Compile main.cpp -> main.o
# The dependency line says: 
# "main.o" depends on "main.cpp", plus any headers it includes
main.o: main.cpp mathfuncs.h randfuncs.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile mathfuncs.cpp -> mathfuncs.o
mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

# Compile randfuncs.cpp -> randfuncs.o
randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -c randfuncs.cpp


clean:
	rm -f *.o calc
