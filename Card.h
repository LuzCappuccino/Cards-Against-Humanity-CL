#ifndef CARD_H
#define CARD_H


#include <iostream>
#include <string>

class Card {
	private:
		std::string generalText;

	public:
		Card(std::string gt);
		std::string getGeneralText();
		void printGeneralText();
}

#endif 