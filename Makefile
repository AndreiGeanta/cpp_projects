
main: main.o complex.o
	g++ mainComplex.o Complex.o -o mainexe
	
complex.o: src/Complex.cpp include/Complex.h

main.o: mainComplex.cpp
	g++ -c -I include/ src/Complex.cpp mainComplex.cpp

clean: 
	rm *.o mainexe  
