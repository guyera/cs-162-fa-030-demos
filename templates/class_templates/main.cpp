#include <iostream>

#include "vector.h"

using namespace std;

int main() {
	vector<int> my_integers;
	my_integers.push_back(5);
	my_integers.push_back(6);
	cout << my_integers.at(1) << endl;
	
	vector<string> my_strings;
	my_strings.push_back("Hello");
	my_strings.push_back("World");
	cout << my_strings.at(1) << endl;
}
