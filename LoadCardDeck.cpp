#include "LoadCardDeck.h"
#include "Card.h"

#include <string>
#include <fstream>
#include <iostream>
#include <set>

LoadCardDeck::LoadCardDeck(std::string pd, std::string rd) : 
promptFileName(pd), responseFileName(rd) { }

/* TODO: iterate through both sets and delete pointers to cards*/
LoadCardDeck::~LoadCardDeck() {
	std::set<Card*>::iterator it1;
	for(it1 = promptDeck.begin(); it1 != promptDeck.end(); it1++) {
		delete it1*;
	}
	std::set<Card*>::iterator it2;
	for(it2 = responseDeck.begin(); it2 != responseDeck.end(); it2++) {
		delete it2*;
	}
}

void LoadCardDeck::load() {
	/* init and load in file */
	std::ifstream promptDeckFile;
	promptDeckFile.open(promptFileName);

	if(promptDeckFile.is_open()) {
		std::string singleLine;
		while(std::getline(promptDeckFile, singleLine)) {
			Card* newPrompt = new Card(singleLine);
			this->promptDeck.insert(newPrompt);
		}
	} else {
		std::cout << "Could not open prompt deck file. \n";
	}
	promptDeckFile.close();

	std::ifstream responseDeckFile;
	responseDeckFile.open(responseFileName);

	if(responseDeckFile.is_open()) {
		std::string singleLine;
		while(std::getline(responseDeckFile, singleLine)) {
			Card* newResponse = new Card(singleLine);
			this->responseDeck.insert(newResponse);
		}
	} else {
		std::cout << "Could not open response deck file. \n";
	}
	responseDeckFile.close();
}

std::set<Card*> LoadCardDeck::returnPromptDeck() {
	return this->promptDeck;
}

std::set<Card*> LoadCardDeck::returnResponseDeck() {
	return this->responseDeck;
}