#ifndef VECTOR_H
#define VECTOR_H

template<typename placeholder>
class vector {
private:
	// Dynamic array of integers and its size
	placeholder* values = nullptr;
	int size = 0;
public:
	vector() {}

	void push_back(placeholder value) {
		placeholder* new_values = new placeholder[size + 1];
		for (int i = 0; i < size; i++) {
			new_values[i] = values[i];
		}
		new_values[size] = value;
		size++;
		
		if (values != nullptr) {
			delete [] values;
		}

		values = new_values;
	}

	placeholder& at(int index) {
		return values[index];
	}

	~vector() {
		if (values != nullptr) {
			delete [] values;
		}
	}

	// Copy constructor and AOO left out
	// for brevity, but you should
	// implement them as well, of course
};

#endif
