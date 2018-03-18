#include "stdafx.h"
#include "Tank.h"
#include "Player.h"


Tank::Tank()
{
}

Tank::Tank(int posX, int posY, eDir dir)
{
	x = posX;
	y = posY;
	exX = posX;
	exY = posY;
	direction = dir;
}

void Tank::moveObjectXY(int step, eDir d)
{
	switch (d)
	{
	case UP:
		if (direction == d)
		{
			exX = x;
			x = x - step;
		}
		else 
		{ direction = d; }
		break;
	case  DOWN:
		if (direction == d)
		{
			exX = x;
			x = x + step;
		}
		else { direction = d; }
		break;
	case LEFT:
		if(direction == d)
		{
			exY = y;
			y = y - step;
		}
		else { direction = d; }
		break;
	case RIGHT:
		if (direction == d)
		{
			exY = y;
			y = y + step;
		}
		else { direction = d; }
		break;
	default:
		break;
	}
}

void Tank::setHealth(int points)
{
	health_point = points;
}

void Tank::setTankType(int type)
{
	tank_type = type;
}

void Tank::moveBarrel(Barrel barrel)
{
	switch (direction)
	{
	case STOP:
		break;
	case LEFT:
		barrel.setObjectY(y -= 1);
		break;
	case RIGHT:
		barrel.setObjectY(y += 1);
		break;
	case UP:
		barrel.setObjectX(x -= 1);
		break;
	case DOWN:
		barrel.setObjectX(x += 1);
		break;
	default:
		break;
	}
}

void Tank::Fire(Bullet bullet)
{
	bullet.setObjectX(x);
	bullet.setObjectY(y);
	bullet.changeDirection(direction);
	bullet.setType(tank_type);
}

void Tank::GetHit(Bullet *bullet)
{
	if (tank_type != bullet->getType() && health_point > 0)
	{
		health_point -= 1;
	}
	delete bullet;
}


Tank::~Tank()
{
}
