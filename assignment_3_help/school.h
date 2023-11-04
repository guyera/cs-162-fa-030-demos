#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
#include <fstream>

#include "roster.h"

using namespace std;

class school {
private:
	string name;
	string city;
	string state;
	roster r;
public:
	void load_data(ifstream& school_file, ifstream& roster_file);
	void print() const;
	void add_student(const student& s);
};

#endif
