#include <iostream>
#include <cmath>

using namespace std;

double add(double value_1, double value_2) {
	return value_1 + value_2;
}

void print() {
	cout << "Hello, world!" << endl;
}

void change_first_element(bool arr[]) {
	arr[0] = false;
}

int main() {
	// This is a single-line comment

	/* This is
	a
	multiline
	comment
	*/

	cout << "Hello, world!" << endl;

	// int -> whole numbers
	// float -> "floating point numbers"
	// double -> "double precision floats"
	// bool -> "boolean" -> true / false
	// char -> character -> 'a', 'b', ','

	// string <- #include <string>
	
	// cout << x << endl; // Won't compile
	int x = 100;
	float y = 10.5;
	bool all_good = true;
	char first_letter = '2';
	{
		float x = 3.14;
		cout << x << endl; // Prints 3.14
	}

	cout << ++x << endl; // Prints 101
	cout << x++ << endl; // Prints 101
	cout << x << endl; // Prints 102

	x += 10;
	cout << x << endl; // Prints 112

	// Make sure to #include <cmath> (see top of file)
	cout << pow(2, 5) << endl; // Prints 32

	// cout << x << endl; // Undefined behavior!!!

	string empty = ""; // Empty strings are okay (empty chars are not!)
	string word = "Hello";

	cout << word << endl; // Prints Hello

	int whole_number = 3.99999; // whole_number: 3
	cout << whole_number << endl; // Prints: 3

	all_good = 12; // Value: true
	int number_boolean = all_good;

	cout << 3 / 5 << endl; // Prints: 0
	cout << 3. / 5 << endl; // Prints: 0.6
	
	x = 3;
	cout << static_cast<double>(x) / 5 << endl; // Prints: 0.6
	cout << static_cast<double>(3 / 5) << endl; // Prints: 0
	

	cout << "Enter a floating point number: ";
	double user_input;
	cin >> user_input;

	if (3.0 + 7.0 == 10.0) {
		cout << "Option 1" << endl;
	} else if (3 + 7 == 9) {
		cout << "Option 2" << endl;
	} else {
		cout << "Option 3" << endl;
	}

	int n;
	int sum = 0;
	do {
		cout << "Enter an integer n:";
		cin >> n;
		sum += n;
	} while (n != 0);
	cout << sum << endl;

	int i;
	for (i = 0; i < 10; i++) {
		cout << i << endl;
	}
	cout << i << endl; // Print: 10

	double arg1 = 3.14;
	double arg2 = 5.7;
	cout << add(arg1, arg2) << endl;
	cout << 8.84 << endl;

	constexpr int size = 10;
	bool mask[size];

	cout << mask << endl; // Prints a memory address
	cout << mask[9] << endl; // Prints garbage
	mask[9] = true;
	cout << mask[9] << endl; // Prints 1

	for (int i = 0; i < 10; i++) {
		mask[i] = true;
	}
	
	change_first_element(mask);
	cout << mask[0] << endl; // Prints: 0 false
}
