#ifndef HOUSE_H
#define HOUSE_H

#include "wall.h"

class house {
public:
	house();
private:
	wall north_wall;
	wall east_wall;
	wall south_wall;
	wall west_wall;
};

#endif
