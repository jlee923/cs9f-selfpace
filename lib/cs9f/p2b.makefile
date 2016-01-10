blackjack: blackjack.o hands.o cards.o
	g++ -Wall -g blackjack.o  hands.o cards.o -o blackjack
blackjack.o: blackjack.cpp cards.h hands.h
	g++ -Wall -c blackjack.cpp
hands.o: hands.cpp hands.h
	g++ -Wall -c hands.cpp
cards.o: cards.cpp cards.h
	g++ -Wall -c cards.cpp
