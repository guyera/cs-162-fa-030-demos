#include <iostream>

using namespace std;

int create_new_integer() {
	int* x = new int;
	*x = 5;
	return x;
}

int main() {
	int* my_integer = create_new_integer();



	int* arr = new int[10];
	// arr pointed to an array of size 10
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	cout << "How many elements do you want to add to this array?";
	int n;
	cin >> n;

	int* arr2 = new int[10+n];
	for (int i = 0; i < 10; i++) {
		arr2[i] = arr[i];
	}

	delete [] arr;

	arr = arr2;
	// arr points to an array of size 10 + n

	delete [] arr;

	// cout << arr[0] << endl; // DON'T DO THIS!

	for (int i = 0; i < 10000000; i++) {
		int* my_new_array = new int[5000000];
	}

	// If you fail to delete dynamic memory, you have a "memory leak"
}
