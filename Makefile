CXX = g++ -std=c++11
CPPFLAGS = -g -Wall

all: cah

cah: mainTesting.cpp Card.o LoadCardDeck.o
	$(CXX) $(CPPFLAGS) $^ -o $@

Card.o: Card.cpp Card.h
	$(CXX) $(CPPFLAGS) -c $< -o $@

LoadCardDeck.o: LoadCardDeck.cpp Card.cpp Card.h LoadCardDeck.h 
	$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf cah