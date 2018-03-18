// ConsoleTanks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Basic_Object.h"
#include "Bullet.h"
#include <vector>
#include <cassert>

using namespace std;

//enum eObj { EmptySpot = 0, PlayerTank, EnemyTank, BrickObject, BulletObject, BarrelObject };


int main()
{
	vector<Basic_Object*> o;
	o.push_back(Basic_Object::create_object(PlayerTank));
	o.push_back(Basic_Object::create_object(BulletObject));
    return 0;
}

