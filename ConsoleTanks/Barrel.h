#pragma once
#include "Basic_Object.h"
#include "Tank.h"

class Barrel :
	public Basic_Object
{
public:
	Barrel();
//	void moveBarrel(Tank tank, eDir d);
	Barrel(Tank);
	~Barrel();
};

