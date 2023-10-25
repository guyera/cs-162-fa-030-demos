#include <iostream>

#include "wall.h"

using namespace std;

// Default ctor. Suppose the "default wall"
// is 15' x 8'.
wall::wall() {
	width = 15;
	height = 8;

	cout << "The default wall constructor is being called" << endl;
}

// TODO We now need to provide a nondefault wall constructor that
// allows us to specify the width and height of the wall.


// Here's the print functioN:
void wall::print() const {
	cout << width << "' x " << height << "'" << endl;
}
