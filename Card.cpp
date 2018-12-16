#include "card.h"

#include <stdio.h>
#include <iostream>
#include <string>


/* public constructor */
Card::Card (std::string gt) : generalText(gt) { }

/* returning the general text */
std::string Card::getGeneralText() {
	return this.generalText;
}

/* basic print function */
void Card::printGeneralText() {
	std::cout << "GT: " << this.generalText << std::endl;
}