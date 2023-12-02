#include <iostream>

using namespace std;

void print_x(int width, int leading_whitespace) {
	if (width == 1) {
		for (int i = 0; i < leading_whitespace; i++) {
			cout << ' ';
		}
		cout << '*';
		cout << endl;
		return;
	}
	
	for (int i = 0; i < leading_whitespace; i++) {
		cout << ' ';
	}
	cout << '*';
	for (int i = 0; i < width - 2; i++) {
		cout << ' ';
	}
	cout << '*';
	cout << endl;

	// The issue was here: I forgot to increase the
	// leading whitespace by 1 in the recursive call
	// (each smaller X needs to have one more leading
	// whitespace)
	print_x(width - 2, leading_whitespace + 1);

	for (int i = 0; i < leading_whitespace; i++) {
		cout << ' ';
	}
	cout << '*';
	for (int i = 0; i < width - 2; i++) {
		cout << ' ';
	}
	cout << '*';
	cout << endl;
}

int main() {
	print_x(9, 0);
	print_x(3, 0);
}
