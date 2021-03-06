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
	// meaning the user already exists within the map
	// else means that this is the users first card submission 
	if(it != submittedResponses.end()) {
		it->second.push_back(responseCard);
	} else {
		std::vecotr<ResponseCard> newVec;
		newVec.push_back(responseCard);
		submittedResponses.insert(std::pair<User, std::vector<ResponseCard> >(submittedBy, newVec));
	}
}

void PromptCard::printSubmittedResponses() {
	std::map<User, std::vector<ResponseCard> >::iterator it;
	for(it = submittedResponses.begin(); it != submittedResponses.end(); it++) {
		User singleUser = it->first;
		std::vector<ResponseCard> singleVec = it->second;
		std::cout << "User: " << singleUser.getUsername() << std::endl;
		for(int i = 0; i < singleVec.size(); i++) {
			std::cout << singleVec[i].getGeneralText() << std::endl;
		}
		std::cout << std::endl;
	}
}

