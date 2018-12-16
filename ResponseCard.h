#ifndef RESPONSECARD_H
#define RESPONSECARD_H

#include <string>
#include "user.h"

class responseCard : public Card {
	private: 
		User usersCard;

	public:
		responseCard();
		User belongsToUser();
		void setUser(User u);
};

#endif