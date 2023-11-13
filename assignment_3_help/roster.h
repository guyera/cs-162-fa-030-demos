#ifndef ROSTER_H
#define ROSTER_H

#include <fstream>

#include "student.h"

class roster {
private:
	int n_students;
	student* students;
public:
	void load_data(ifstream& roster_file);
	void print() const;
	void add_student(const student& s);
	void remove_student(int index);

	void operator=(const roster& other);

	// You'd also need a copy constructor and big 3,
	// but I ran out of time in this demo
};

#endif
