#include "stdafx.h"
#include "Barrel.h"


Barrel::Barrel()
{
	x = 0;
	y = 0;
	direction = STOP;
	graphics = "\xFE";
	objectId = BarrelObject;
}

//void Barrel::moveBarrel(Tank tank, eDir d)
//{
//	if(tank.getDirection() == d)
//	{
//		return;
//	}
//	else
//	{
//		
//	}
//}

Barrel::Barrel(Tank tank)
{
	graphics = "\xFE";
	direction = tank.getDirection();
	objectId = BarrelObject;
	switch (direction)
	{
	case STOP:
		exX = x;
		x = tank.getObjectX();
		exY = y;
		y = tank.getObjectY();
		break;
	case LEFT:
		exX = x;
		x = tank.getObjectX();
		exY = y;
		y = tank.getObjectY() - 1;
		break;
	case RIGHT:
		exX = x;
		x = tank.getObjectX();
		exY = y;
		y = tank.getObjectY()+1;
		break;
	case UP:
		exX = x;
		x = tank.getObjectX()-1;
		exY = y;
		y = tank.getObjectY();
		break;
	case DOWN:
		exX = x;
		x = tank.getObjectX()+1;
		exY = y;
		y = tank.getObjectY();
		break;
	default:
		break;
	}
}


Barrel::~Barrel()
{
}
