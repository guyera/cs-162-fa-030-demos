#include "school.h"

int main() {
	school s;

	ifstream school_file;
	school_file.open("school.txt");

	ifstream roster_file;
	roster_file.open("roster.txt");

	s.load_data(school_file, roster_file);
	s.print();

	student rob("Rob", "Jones", 1000);
	s.add_student(rob);
	
	s.print();

	// NOTE: I didn't have time to do this,
	// but we should've defined the big 3
	// for the roster class. Currently,
	// we have a memory leak and a strong
	// potential for an accidental shallow
	// copy of rosters (which could cause
	// seg faults from double frees and whatnot).
}
