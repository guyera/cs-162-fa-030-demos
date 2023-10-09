#include <iostream>

using namespace std;


void change_me(int* x) {
	*x = 0;
}

void change_me_ref(int& x) {
	x = 0;
}

int main() {
	int y = 10;
	int* p = &y;
	int** p2 = &p;
	cout << p << endl; // Prints: The memory address of y
	*p = 100;
	// equivalent to: y = 100;
	cout << y << endl; // Print: 100
	cout << *p << endl; // Print: 100

	int x;
	p = &x;
	*p = 5;
	cout << x << endl; // Prints: 5

	p = &y;
	change_me(p);
	cout << y << endl; // Print: 0

	int& ref = y;
	ref = 3;
	cout << y << endl; // Prints: 3

	change_me_ref(y);

	ref = x; // What does this do? y = x

	// *
	// context 1: In the declaration of a variable
	// int* p
	// Meaning: We are declaring a pointer to an int
	// Context 2: Prefix to existing pointer
	// *p
	// Meaning: Dereference operator; go to that memory
	// address, and access the value in that box
	// &
	// Context 1: Prefix to existing variable
	// &y
	// Meaning: Get the address of y
	// Context 2: In the declaration of a variable
	// int& ref = y;
	// Meaning: ref is a reference to an integer, y

	string* my_string_pointer = nullptr; // This is garbage
	if (my_string_pointer != nullptr) {
		*my_string_pointer = "Hello";
	}
}
