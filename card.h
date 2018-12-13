#ifndef CARD_H
#define CARD_H


#include <iostream>
#include <string>

class Card {
	private:
		std::string generalText;
		int cardID;

	public:
		Card(int cardID, std::string generalText);
		std::string getGeneralText();
		int getCardID();

}

#endif 