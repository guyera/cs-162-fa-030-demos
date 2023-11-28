#include "vector_string.h"

vector_string::vector_string() {}

void vector_string::push_back(string value) {
	string* new_values = new string[size + 1];
	for (int i = 0; i < size; i++) {
		new_values[i] = values[i];
	}
	new_values[size] = value;
	size++;
	
	if (values != nullptr) {
		delete [] values;
	}

	values = new_values;
}

string& vector_string::at(int index) {
	// Normally, the at() function should
	// throw an error if the index is out
	// of bounds. I left that out for
	// brevity.
	return values[index];
}

vector_string::~vector_string() {
	if (values != nullptr) {
		delete [] values;
	}
}
