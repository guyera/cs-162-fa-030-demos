#ifndef VECTOR_INT_H
#define VECTOR_INT_H

class vector_int {
private:
	// Dynamic array of integers and its size
	int* values = nullptr;
	int size = 0;
public:
	vector_int();
	void push_back(int value);
	int& at(int index);

	~vector_int();
	// Copy constructor and AOO left out
	// for brevity, but you should
	// implement them as well, of course
};

#endif
