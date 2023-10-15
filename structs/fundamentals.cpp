#include <iostream>

using namespace std;

struct baseball_player {
	string first_name;
	string last_name;
	int age;
	double batting_average;
}; // <--- Mind the semicolon!

int main() {
	baseball_player joe;
	joe.first_name = "Joe";
	joe.last_name = "Redfield";
	joe.age = 61;
	joe.batting_average = 0.1;

	//cout << joe.first_name << " " << joe.last_name << " is " << joe.age << " years old, and has a batting average of " << joe.batting_average << endl;


	baseball_player sally;
	sally.first_name = "Sally";
	sally.last_name = "Whiting";
	sally.age = 41;
	sally.batting_average = 0.15;

	cout << joe.first_name << endl; // Prints "Joe"
	cout << sally.first_name << endl; // Prints "Sally"
}
