#include "stdafx.h"
#include "Basic_Object.h"
#include <cassert>
#include "Bullet.h"
#include "Player.h"
#include "Brick.h"

//static enum eDir { STOP = 0, LEFT, RIGHT, UP, DOWN };

Basic_Object::Basic_Object()
	{
		x = 0;
		y = 0;
		direction = STOP;
	}

Basic_Object::~Basic_Object()
	{
	}

Basic_Object::Basic_Object(int posX, int posY, eDir dir)
	{
		originalX = posX;
		originalY = posY;
		x = posX; 
		y = posY;
		exX = posX;
		exY = posY;
		direction = dir;
	}

void Basic_Object::Reset()
	{
		x = originalX; y = originalY;
		direction = STOP;
	}
	void Basic_Object::changeDirection(eDir d)
	{
		direction = d;
	}
	int Basic_Object::getObjectX()
	{
		return x;
	}
	int Basic_Object::getObjectExX()
	{
		return exX;
	}
	int Basic_Object::getObjectY()
	{
		return y;
	}

	int Basic_Object::getObjectExY()
	{
		return exY;
	}

	void Basic_Object::setObjectX(int posX)
	{
		x = posX;
	}
	void Basic_Object::setObjectY(int posY)
	{
		y = posY;
	}

	void Basic_Object::moveObjectXY(int step, eDir d)
	{
		/*switch (d)
		{
		case UP:
			x = x - step;
			break;
		case  DOWN:
			x = x + step;
			break;
		case LEFT:
			y = y - step;
			break;
		case RIGHT:
			y = y + step;
			break;
		default:
			break;
		}	*/
	}

	void Basic_Object::moveObjectXY(eDir d)
	{

	}

	eDir Basic_Object::getDirection()
	{
		return direction;
	}



	eObj Basic_Object::getObjectId()
	{
		return objectId;
	}

	std::string Basic_Object::getGraphics()
	{
		return graphics;
	}

Basic_Object* Basic_Object::create_object(eObj id)
{
	Basic_Object * obj;
	switch (id)
	{
		case PlayerTank:
			obj = new Player();
			break;
		case EnemyTank:
			obj = new Enemy();
			break;
		case BrickObject:
			obj = new Brick();
			break;
		case BulletObject:
			obj = new Bullet();
			break;
		case BarrelObject:
			obj = new Barrel();
			break;
		default:
			assert(false);
	}
	return obj;
};

	/*void Move(eDir d)
	{
		switch (d)
		{
		case STOP:
			break;
		case LEFT:
			if (direction == LEFT)
			{
				y-=1;
				break;
			}
			else
			{
				direction = LEFT;
				break;
			}
		case RIGHT:
			if (direction == RIGHT)
			{
				y+=1;
				break;
			}
			else
			{
				direction = RIGHT;
				break;
			}
		case UP:
			if (direction == UP)
			{
				x-=1;
				break;
			}
			else
			{
				direction = UP;
				break;
			}

		case DOWN:
			if (direction == DOWN)
			{
				x+=1;
				break;
			}
			else
			{
				direction = DOWN;
				break;
			}
		default:
			break;
		}
	}*/

