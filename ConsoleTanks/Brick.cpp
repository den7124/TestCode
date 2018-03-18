#include "stdafx.h"
#include "Brick.h"


Brick::Brick()
{
	x = 0;
	y = 0;
	graphics = "\xDB";
	objectId = BrickObject;
}

Brick::Brick(int posX, int posY)
{
	x = posX;
	y = posY;
	graphics = "\xDB";
	objectId = BrickObject;
}


Brick::~Brick()
{
}
