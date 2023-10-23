#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream in_file;
	
	in_file.open("file.txt");

	string word;
	in_file >> word;
	in_file >> word;
	cout << word << endl;
}
