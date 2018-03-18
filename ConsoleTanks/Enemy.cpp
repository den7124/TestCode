#include "stdafx.h"
#include "Enemy.h"


Enemy::Enemy()
{
	graphics = "\xB2";
	objectId = EnemyTank;
}

Enemy::Enemy(int posX, int posY, eDir dir)
{
	x = posX;
	y = posY;
	direction = dir;
	graphics = "\xB2";
	objectId = EnemyTank;
}


Enemy::~Enemy()
{
}
