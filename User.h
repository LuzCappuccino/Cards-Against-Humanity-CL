#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "card.h"

class User {
	private:
		std::string username;
		std::std::vector<card> cardHand;

	public:
		User(std::string u);
		std::string getUsername();
		void addCard(card newCard);
		void displayHand();
}

#endif 