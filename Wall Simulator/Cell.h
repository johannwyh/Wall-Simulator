#pragma once
#ifndef _CELL_
#define _CELL_

#include "third_party.h"

class Cell {
public:
	Cell();
	~Cell();
private:
	int exist;
	GLfloat color[4];
};

#endif