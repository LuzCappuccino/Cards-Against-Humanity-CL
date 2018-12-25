#include <string>
#include <iostream>
#include <fstream>
#include <set>

#include "Card.h"

class LoadCardDeck {
	private: 
		std::string promptFileName;
		std::string responseFileName;
		std::set<PromptCard*> promptDeck;
		std::set<ResponseCard*> responseDeck;

	public:
		LoadCardDeck(std::string pd, std::string rd);
		~LoadCardDeck();
		void load();
		std::set<PromptCard*> returnPromptDeck();
		std::set<ResponseCard*> returnResponseDeck();
};