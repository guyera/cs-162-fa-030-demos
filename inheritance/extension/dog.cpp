#include <iostream>

#include "dog.h"

using namespace std;

// Implement the dog::print_fixed() function
void dog::print_fixed() const {
	if (fixed) {
		cout << "Great job, owner! I'm fixed" << endl;
	} else {
		cout << "Uh oh! I'm not fixed. My owner should probably take me to the vet, unless they're a certified dog breeder" << endl;
	}
}
