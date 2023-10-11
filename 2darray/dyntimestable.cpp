#include <iostream>

using namespace std;

// Problem: Ask the user for two positive integers M and N.
// Create an MxN times table and store it all in
// memory at once (i.e., you'll need to store all M*N values
// in memory simultaneously). Then print it neatly.

void populate(int** array, int m, int n) {

}

int main() {
	int m;
	cin >> m;
	int n;
	cin >> n;

	int** array = new int*[m];
	for (int i = 0; i < m; i++) {
		array[i] = new int[n];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int product = (i + 1) * (j + 1);
			array[i][j] = product;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	// Delete the array "inside out"---delete the inner arrays, THEN the outer array
	for (int i = 0; i < m; i++) {
		delete [] array[i];
	}
	delete [] array;
}
