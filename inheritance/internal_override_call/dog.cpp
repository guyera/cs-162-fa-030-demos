#include <iostream>

#include "dog.h"

using namespace std;

dog::dog(const string &name, bool fixed) : animal(name), fixed(fixed) {}

dog::dog() {}

dog::~dog() {}

// Overridden print() function
void dog::print() const {
	// Call the animal::print() function, which prints this dog's
	// generic-animal information (its name) TODO

	// Then print this dog's dog-specific information
	if (fixed) {
		cout << "I'm fixed! Great job, owner!" << endl;
	} else {
		cout << "Oh no! I'm not fixed! My owner should probably take me to a "
			"vet, unless they're a USDA-licensed dog breeder." << endl;
	}
}
