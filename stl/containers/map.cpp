#include <iostream>
#include <map>

using namespace std;

int main() {
	// Construct our map of names -> ages
	map<string, int> my_map;
	my_map.insert({"Alex", 24});
	my_map.insert({"Roger", 26});

	// Ask the user for a name
	cout << "Enter a person's name: ";
	string name;
	cin >> name;

	// Check to see if that person's name
	// is recorded in the map. If so, get
	// their age.
	map<string, int>::iterator itr = my_map.find(name);

	// If the person's name is in the map, print
	// their age
	if (itr != my_map.end()) {
		cout << (*itr).first << " is " << (*itr).second << " years old" << endl;
	} else {
		cout << "Person not found with that name" << endl;
	}
}
