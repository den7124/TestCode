#pragma once
#include "Basic_Object.h"

class Bullet :
	public Basic_Object
{
protected:
	int bullet_type;
public:
	Bullet();
	Bullet(int, int, eDir, int);
	void setType(int);
	int getType();
	void moveObjectXY(eDir);
	~Bullet();
};

