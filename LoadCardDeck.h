#include <string>
#include <iostream>
#include <fstream>
#include <set>

#include "Card.h"

class LoadCardDeck {
	private: 
		std::string promptFileName;
		std::string responseFileName;
		std::set<Card*> promptDeck;
		std::set<Card*> responseDeck;

	public:
		LoadCardDeck(std::string pd, std::string rd);
		~LoadCardDeck();
		void load();
		std::set<Card*> returnPromptDeck();
		std::set<Card*> returnResponseDeck();
};