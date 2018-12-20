#ifndef PROMPTCARD_H
#define PROMPTCARD_H

#include "Card.h"
#include "PromptCard.h"
#include "Player.h"

#include <vector>
#include <string>

class PromptCard : public Card {

	private: 
		std::map<User, std::vector<ResponseCard> > submittedResponses;
		int validSubmissionSlots;
		int findSubmissionSlots();

	public: 
		PromptCard();
		int getSubmissionSlots();
		void printSubmittedResponses();
		void addPlayerResponse(ResponseCard responseCard);
}


#endif