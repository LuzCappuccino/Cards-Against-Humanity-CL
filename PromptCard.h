#ifndef PROMPTCARD_H
#define PROMPTCARD_H

class PromptCard : public Card {

	private: 
		std::vector<Card> responses;
		
	public: 
		PromptCard();
}


#endif