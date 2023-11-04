#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

using namespace std;

class student {
private:
	string first_name;
	string last_name;
	int credit_hours;
public:
	student();
	student(string, string, int);
	void load_data(ifstream& roster_file);
	void print() const;
};

#endif
