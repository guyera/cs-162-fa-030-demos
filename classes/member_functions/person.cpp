#include <iostream>

#include "person.h"

using namespace std;

// define the name mutator
void person::set_name(string new_name) {
	name = new_name;
}

// define the name accessor
string person::get_name() {
	return name;
}
