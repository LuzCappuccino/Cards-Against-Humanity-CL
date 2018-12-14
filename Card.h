#ifndef CARD_H
#define CARD_H


#include <iostream>
#include <string>

class Card {
	private:
		std::string generalText;

	public:
		Card(std::string generalText);
		std::string getGeneralText();
}

#endif 