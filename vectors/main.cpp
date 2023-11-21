#include <iostream>
#include <vector>

#include "coffee.h"

using namespace std;

int main() {
	coffee c("Mocha", 1.00, 2.00, 3.00);

	// 8 mochas
	vector<coffee> my_vector(8, c);

	// Iterators:
	// Get an iterator that "points" to the first
	// element in our vector: my_vector.begin()

	// Get an iterator that "points" just after
	// the last element in our vector:
	// my_vector.end()

	// Get an iterator that "points" to the
	// third element in our vector:
	// my_vector.begin() + 2

	// Resizing vectors...
	// This will REMOVE the last two elements
	// from our vector
	my_vector.resize(6);
	
	my_vector.resize(7);

	// Add a latte to the END of the vector
	coffee c2("Latte", 0.1, 0.2, 0.3);
	my_vector.push_back(c2);

	// Add a cappuccino to the "middle" of
	// our vector:
	coffee c3("Cappuccino", 1.50, 2.35, 3.25);
	my_vector.insert(my_vector.begin() + 2, c3);

	// Delete the 5th coffee of our vector:
	my_vector.erase(my_vector.begin() + 4);

	// .emplace(), .emplace_back()

	cout << my_vector.size() << endl;

	for (int i = 0; i < my_vector.size(); i++) {
		my_vector.at(i).print();
	}

	my_vector.reserve(12);
	my_vector.shrink_to_fit();

	cout << my_vector.capacity() << endl;
}
































