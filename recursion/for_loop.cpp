#include <iostream>

using namespace std;

void print_hello(int n) {
	cout << "Hello" << endl;

	if (n > 1) {
		print_hello(n - 1);
	}
}

int main() {
	print_hello(1000000000);
}
