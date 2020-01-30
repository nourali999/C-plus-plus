output: practice1.o practice2.o
	g++ practice1.o practice2.o -o output
practice1.o: practice1.cpp
	g++ -std=c++11 -c practice1.cpp
practice2.o: practice2.cpp
	g++ -std=c++11 -c practice2.cpp
clean:
	rm *.o output