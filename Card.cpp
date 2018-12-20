#include "Card.h"

#include <stdio.h>
#include <iostream>
#include <string>


/* public constructor */
Card::Card (std::string gt) : generalText(gt) { }

/* returning the general text */
std::string Card::getGeneralText() {
	return generalText;
}

/* basic print function */
void Card::printGeneralText() {
	std::cout << "GT: " << generalText << std::endl;
}