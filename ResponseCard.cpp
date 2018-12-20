#include "ResponseCard.h"
#include "User.h"

/* Basic constrcutor. Inits the user owner to null. */
ResponseCard::ResponseCard() : belongsTo(null) { }

/* returs the owner of the card */
User ResponseCard::belongsToUser() {
	return this->belongsTo;
}

/* sets the owner of the card */
void ResponseCard::setUser(User u) {
	this->belongsTo = u;
}