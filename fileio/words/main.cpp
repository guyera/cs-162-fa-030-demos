// Task: Ask the user for the name of a file. Open the file
// with an ifstream. Assume that the file contains exactly
// three words, followed by one decimal number (e.g., a double),
// each separated by a space. Read the contents of the file, and
// print the second word and 2 * the decimal number to the terminal.

#include <iostream>

// What do we have to #include?
#include <fstream>

using namespace std;

string get_filename() {
	string filename;
	cout << "Enter the name of the file: ";
	cin >> filename;
	return filename;
}

int main() {
	string filename;
	// Ask the user for the name of the file
	// they want us to write to. Store the filename in `filename`
	filename = get_filename();
	
	// Create the ifstream
	ifstream my_ifstream;

	// Tell the ifstream to open the file whose name is stored in `filename`
	my_ifstream.open(filename);
	
	string word;
	// Read the first word from the file. Yes, even though we don't need
	// to print it to the terminal, we still have to read it in order to get
	// "past" it and proceed to read the second word.
	my_ifstream >> word;

	char my_cool_char;
	my_ifstream >> my_cool_char;
	cout << my_cool_char << endl;

	// Read the second word from the file, then print it to the terminal
	my_ifstream >> word;
	cout << word << endl;

	// Read the third word from the file. Again, even though we don't have
	// to print it, we still have to read it to get to the decimal number.
	my_ifstream >> word;

	// Read the decimal number to the file, then print it to the terminal.
	double value;
	my_ifstream >> value;
	cout << 2 * value << endl;
}
