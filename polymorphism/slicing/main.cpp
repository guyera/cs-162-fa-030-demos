#include <iostream>

#include "zombie.h"
#include "vampire.h"

using namespace std;

// This function allows each monster to do their turn
void do_turn(int turn, monster* m, int n_monsters) {
	cout << "--------------" << endl;
	cout << "Turn " << turn << ": " << endl;
	cout << "--------------" << endl;

	// Perform each monster's turn
	for (int i = 0; i < n_monsters; i++) {
		// Complete this loop
		m[i].perform_action();
	}
}

int main() {
	int n_m = 8;
	// Create an array of monsters
	monster* monsters = new monster[8];

	// The first 5 monsters are zombies
	for (int i = 0; i < 5; i++) {
		// Create a zombie and store it in the array
		zombie z;
		monsters[i] = z;
	}

	// The last 3 monsters are vampires
	for (int i = 5; i < 8; i++) {
		// Create a vampire and store it in the array
		vampire v;
		monsters[i] = v;
	}

	// Do three turns
	do_turn(1, monsters, n_m);
	do_turn(2, monsters, n_m);

	// By the third turn, our zombies will have lost their
	// sanity, so they will start attacking as well
	do_turn(3, monsters, n_m);
}
