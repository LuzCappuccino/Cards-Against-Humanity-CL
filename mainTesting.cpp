#include <string>
#include <stdio.h>
#include <iostream>

#include "Card.h"
#include "LoadCardDeck.h"

int main(int argc, char const *argv[])
{
	std::string promptFile = "cah_maindeck.txt";
	std::string responseFile = "cah_responses.txt";

	LoadCardDeck loadCardDeck = LoadCardDeck(promptFile, responseFile);
	loadCardDeck.load();
}