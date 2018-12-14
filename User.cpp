#include "user.h"

#include <string>
#include  <vector>

User::User(std::string u) : username(u) {
	std::cout << "User " << this.username << " created. \n"; 
}

