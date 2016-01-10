


makeprog1: prog1.cpp
	g++ -o prog1.out -g -Wall prog1.cpp
	mv *.dSYM builddir/

clean:
	rm prog1.out
	rm -rf builddir/*