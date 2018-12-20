#include "User.h"

#include <string>
#include  <vector>

/* basic constructor, simple cout to show success. */
User::User(std::string u) : username(u) {
	std::cout << "User " << this.username << " created. \n"; 
}

/* returns the given user's username */
std::string User::getUsername() {
	return username;
}

/* pushes a given responsecard to the cardhand and 
 * assigns the user as its owner */
void User::addCard(ResponseCard newCard) {
	newCard.setUser(this);
	cardHand.push_back(newCard);
}

/* printing function that displays all the cards in the 
 * hand with a corresponding number to indicate element */
void User::displayHand() {
	for(int i = 0; i < cardHand.size(); i++) {
		std::string strResponse = cardHand[i].getGeneralText();
		std::cout << i << ": " << strResponse << std::endl;
	}
}

/* works through the vector with an iterator to find and return the 
 * selected response and then remove it from the players hand */
ResponseCard User::submitCard(int index) {
	std::vector<ResponseCard>::iterator it;
	int i = 0;
	for(it = cardHand.begin(); it != cardHand.end(); it++, i++) {
		if(i == index) {
			ResponseCard submission = *it;
			cardHand.erase(it);
			return submission;
		}
	}
	return null;
}