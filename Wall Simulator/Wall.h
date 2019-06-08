#pragma once
#ifndef _WALL_
#define _WALL_

#include "third_party.h"
#include "Cell.h"
class Wall {
public:
	Wall();
	~Wall();
private:
	Cell** mat;
};

#endif