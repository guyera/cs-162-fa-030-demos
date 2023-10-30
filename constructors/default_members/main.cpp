#include "person.h"

int main() {
	person p(32);
	p.greet();

	person* arr = new person[100];

	arr[0].set_name("John");

	delete [] arr;
}
