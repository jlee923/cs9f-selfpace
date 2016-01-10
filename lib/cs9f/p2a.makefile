cat+mouse: cat+mouse.o positions.o
	g++ -Wall -g cat+mouse.o positions.o -o cat+mouse -lm
cat+mouse.o: cat+mouse.cpp positions.h
	g++ -Wall -c cat+mouse.cpp
positions.o: positions.cpp
	g++ -Wall -c positions.cpp
