#include <iostream>

#include "student.h"

using namespace std;

student::student() {}

student::student(
		string first_name,
		string last_name,
		int credit_hours)
		: first_name(first_name),
		last_name(last_name),
		credit_hours(credit_hours) {}

void student::load_data(ifstream& file) {
	file >> first_name;
	file >> last_name;
	file >> credit_hours;
}

void student::print() const {
	cout << first_name << " "\
	<< last_name << " is taking "
	<< credit_hours << " credit hours" << endl;
}
