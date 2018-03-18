#pragma once
#include <string>

enum eDir { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eObj { EmptySpot = 0, PlayerTank, EnemyTank, BrickObject, BulletObject, BarrelObject };

class Basic_Object
{
protected:
	int x, y;
	int exX, exY;
	int originalX, originalY;
	eDir direction;
	std::string graphics;
	eObj objectId;
public:
	Basic_Object();
	Basic_Object(int, int, eDir dir);
	void Reset();
	void changeDirection(eDir d);
	int getObjectX();
	int getObjectExX();
	int getObjectY();
	int getObjectExY();
	void setObjectX(int);
	void setObjectY(int);
	void moveObjectXY(int, eDir d);
	void moveObjectXY(eDir d);
	eDir getDirection();
	eObj getObjectId();
	std::string getGraphics();
	~Basic_Object();
	static Basic_Object* create_object(eObj id);
};
