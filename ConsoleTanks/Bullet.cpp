#include "stdafx.h"
#include "Bullet.h"


Bullet::Bullet()
{
	graphics = "\xA7";
	objectId = BulletObject;
}

Bullet::Bullet(int posX, int posY, eDir dir, int _bullet_type)
{
	bullet_type = _bullet_type;
	x = posX;
	y = posY;
	direction = dir;
	graphics = "\xA7";
	objectId = BulletObject;
}

void Bullet::setType(int type)
{
	bullet_type = type;

}

int Bullet::getType()
{
	return bullet_type;
}

void Bullet::moveObjectXY(eDir d)
{
	switch (d)
	{
	case STOP:
		break;
	case LEFT:
		exY = y;
		y -= 1;
		break;
	case RIGHT:
		exY = y;
		y += 1;
		break;
	case UP:
		exX = x;
		x -= 1;
		break;
	case DOWN:
		exX = x;
		x += 1;
		break;
	default:
		break;
	}
}


Bullet::~Bullet()
{
}
