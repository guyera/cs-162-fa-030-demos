#ifndef VECTOR_STRING_H
#define VECTOR_STRING_H

#include <string>

using namespace std;

class vector_string {
private:
	// Dynamic array of strings and its size
	string* values = nullptr;
	int size = 0;
public:
	vector_string();
	void push_back(string value);
	string& at(int index);

	~vector_string();
	// Copy constructor and AOO left out
	// for brevity, but you should
	// implement them as well, of course
};

#endif
