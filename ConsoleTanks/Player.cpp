#include "stdafx.h"
#include "Player.h"


Player::Player()
{
	health_point = 3;
	tank_type = 1;
	graphics = "\xB1";
	objectId = PlayerTank;
}

Player::Player(int posX, int posY, eDir dir)
{
	x = posX;
	y = posY;
	direction = dir;
	graphics = "\xB1";
	objectId = PlayerTank;
}


Player::~Player()
{
}
