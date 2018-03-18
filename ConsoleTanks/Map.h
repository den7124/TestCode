#pragma once
#include "Basic_Object.h"
const unsigned int height = 30;
const unsigned int width = 30;

class Map
{
private:
	unsigned int randomX;
	unsigned int randomY;
	bool posted;
	int mapArray[width][height];
public:

	Map();
	void CreateMap();
	void PutObject(Basic_Object);
	void MoveObbject(Basic_Object);
	void EjectObject(Basic_Object);
	void ResetObject(Basic_Object);
	void RemoveObject(Basic_Object);
	~Map();
};

