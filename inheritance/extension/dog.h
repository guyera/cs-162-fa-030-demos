#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	// Not all animals can be fixed (spayed / neutered), but dogs can.
	// Add a `fixed` member variable
	bool fixed = true;
public:
	// Add a function called print_fixed() that prints some message
	// depending on whether the dog is fixed
	void print_fixed() const;
};

#endif
