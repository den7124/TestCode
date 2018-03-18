#pragma once
#include "Basic_Object.h"
#include "Barrel.h"
#include "Bullet.h"

class Tank :
	public Basic_Object
{
protected:
	int tank_type;
	int health_point;
	int bulletX;
	int bulletY;
public:
	Tank();
	Tank(int,int,eDir);
	void moveObjectXY(int, eDir);
	void setHealth(int);
	void setTankType(int);
	void moveBarrel(Barrel);
	void Fire(Bullet);
	void GetHit(Bullet* bullet);
	~Tank();
};

