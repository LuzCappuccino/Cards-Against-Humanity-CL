#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>


/* Basic card functionality avaliable to both prompt
 * and response cards. */

class Card {
	private:
		std::string generalText;

	public:
		Card(std::string gt);
		std::string getGeneralText();
		void printGeneralText();
};

#endif 