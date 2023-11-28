#include "vector_int.h"

vector_int::vector_int() {}

void vector_int::push_back(int value) {
	int* new_values = new int[size + 1];
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

int& vector_int::at(int index) {
	// Normally, the at() function should
	// throw an error if the index is out
	// of bounds. I left that out for
	// brevity.
	return values[index];
}

vector_int::~vector_int() {
	if (values != nullptr) {
		delete [] values;
	}
}
