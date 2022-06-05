CXX=g++
CXXFLAGS?=-Wall -pedantic -g -O0 -std=c++11
OUTFILES=OptimizeTest

all: $(OUTFILES)

PLATest: OptimizeTest.cpp Optimize.cpp Optimize.h
	$(CXX) $(CXXFLAGS) -o OptimizeTest OptimizeTest.cpp Optimize.cpp

clean:
	$(RM) $(OUTFILES) *.o