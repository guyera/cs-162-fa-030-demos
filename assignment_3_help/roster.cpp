#include <iostream>

#include "roster.h"

using namespace std;

void roster::load_data(ifstream& roster_file) {
	roster_file >> n_students;
	students = new student[n_students];
	for (int i = 0; i < n_students; i++) {
		students[i].load_data(roster_file);
	}
}

void roster::print() const {
	cout << "Roster of students: " << endl;
	cout << "----------" << endl;
	for (int i = 0; i < n_students; i++) {
		students[i].print();
	}
	cout << "----------" << endl;
}

void roster::add_student(const student& s) {
	student* new_array = new student[n_students + 1];
	for (int i = 0; i < n_students; i++) {
		new_array[i] = students[i];
	}
	delete [] students;
	students = new_array;
	n_students++;

	students[n_students - 1] = s;
}
