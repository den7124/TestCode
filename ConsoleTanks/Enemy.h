#pragma once
#include "Tank.h"
class Enemy :
	public Tank
{
public:
	Enemy();
	Enemy(int, int, eDir);
	~Enemy();
};

