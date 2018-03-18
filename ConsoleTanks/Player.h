#pragma once
#include "Tank.h"
class Player :
	public Tank
{
protected:
public:
	Player();
	Player(int, int, eDir);
	~Player();
};

