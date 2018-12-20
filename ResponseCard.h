#ifndef RESPONSECARD_H
#define RESPONSECARD_H

#include "Card.h"
#include "User.h"

#include <string>

/* ResponseCard builds upon the basic Card structure. Simply 
 * the idea of user ownership to the mix. */

class ResponseCard : public Card {
	private: 
		User belongsTo;

	public:
		ResponseCard();
		User belongsToUser();
		void setUser(User u);
};

#endif