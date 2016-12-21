CXX = g++
CPPFLAGS = -std=c++11 -g -MMD
CPPWARNINGS = -Wall -pedantic

compresso: compresso.o
	$(CXX) -o $@ $^ 

compresso.o: compresso.cpp compresso.h
	$(CXX) -c $(CPPFLAGS) $(CPPWARNINGS) $<

clean:
	rm *.o *.gch *.d compresso
