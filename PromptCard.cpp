#include "PromptCard.h"
#include "ResponseCard.h"
#include "Card.h"
#include "User.h"

#include <string>
#include <vector>

PromptCard::PromptCard() { 
	validSubmissionSlots = findSubmissionSlots();
}

// credit to: https://thispointer.com/find-all-occurrences-of-a-sub-string-in-a-string-c-both-case-sensitive-insensitive/
int findSubmissionSlots() {
	std::std::vector<size_t> v;
	std::string searchFor = "______";
	std::string generalText = Card::getGeneralText();

	size_t pos = generalText.find(searchFor);
	while(pos != std::string::npos) {
		v.push_back(pos);
		pos = generalText.find(searchFor, pos + searchFor.size());
	}

	return v.size();
}

int PromptCard::getSubmissionSlots() {
	return validSubmissionSlots;
}

void PromptCard::addPlayerResponse(ResponseCard responseCard) {
	User submittedBy = responseCard.belongsToUser();
	std::map<User, std::vector<ResponseCard> >::iterator it = submittedResponses.find(submittedBy);
	if(it != something) {

	} else {

	}
}

