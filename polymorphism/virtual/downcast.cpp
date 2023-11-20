#include "zombie.h"
#include "monster.h"

int main() {
	monster m;
	zombie *z = static_cast<zombie*>(&m);

	zombie z2;
	monster *p = &z2;
}
