#ifndef USER_H
#define USER_H

#include "User.h"

#include <string>
#include <vector>

/* User object that simply records a given player's 
 * current hand and their name. */

class User {
	private:
		std::string username;
		std::std::vector<ResponseCard> cardHand;

	public:
		User(std::string u);
		std::string getUsername();
		void addCard(ResponseCard newCard);
		void displayHand();
		ResponseCard submitCard(int index);
}

#endif 