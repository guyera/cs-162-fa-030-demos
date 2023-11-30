#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	// Create a vector with unique values 1-5.
	// This is a special initialization syntax;
	// it works for vectors just like it works for
	// stack-allocated arrays.
	vector<int> my_vector = {1, 5, 4, 2, 5, 1, 2, 3, 4, 4, 5, 2, 1};

	// Create a set to record the unique elements in vec
	unordered_set<int> my_set;

	// For each element in my_vector, add the element
	// to the set if it's not already present
	for (int i = 0; i < my_vector.size(); i++) {
		my_set.insert(my_vector[i]);
	}

	// Iterate and print the set elements. Sets aren't
	// indexed (there is no .at() function or []
	// operator), so we do this with an iterator.
	for (unordered_set<int>::iterator itr = my_set.begin();
			itr != my_set.end();
			itr++) {
		cout << *itr << endl;
	}
}
