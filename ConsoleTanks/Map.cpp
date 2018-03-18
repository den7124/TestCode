#include "stdafx.h"
#include "Map.h"


Map::Map()
{
	CreateMap();
}

void Map::CreateMap()
{
	// Fill map with zero objects
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			mapArray[i][j] = eObj(EmptySpot);
		}
	}

	// Make borders
	for (int i = 0; i < width; i++)
	{
		mapArray[i][0] = eObj(BrickObject);
		mapArray[width - 1][i] = eObj(BrickObject);
		mapArray[i][height - 1] = eObj(BrickObject);
		mapArray[0][i] = eObj(BrickObject);
	}
}

void Map::PutObject(Basic_Object obj)
{
	switch (obj.getObjectId)
	{
	case EmptySpot:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(EmptySpot);
		break;
	case PlayerTank:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(PlayerTank);
		break;
	case EnemyTank:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(EnemyTank);
		break;
	case BrickObject:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(BrickObject);
		break;
	case BulletObject:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(BulletObject);
		break;
	case BarrelObject:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(BarrelObject);
		break;
	default:
		break;
	}
}

void Map::MoveObbject(Basic_Object obj)
{
	if(obj.getObjectId() == EmptySpot || obj.getObjectId() == BrickObject)
	{
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
	}
	if(obj.getObjectId() == PlayerTank || obj.getObjectId() == EnemyTank)
	{
		obj.moveObjectXY(1, obj.getDirection());
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
		mapArray[obj.getObjectExX()][obj.getObjectExY()] = eObj(EmptySpot);
	}
	if(obj.getObjectId() == BulletObject)
	{
		obj.moveObjectXY(obj.getDirection());
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
		mapArray[obj.getObjectExX()][obj.getObjectExY()] = eObj(EmptySpot);
	}
	if(obj.getObjectId() == BarrelObject)
	{
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
		mapArray[obj.getObjectExX()][obj.getObjectExY()] = eObj(EmptySpot);
	}
	/*switch (obj.getObjectId)
	{
	case EmptySpot:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(EmptySpot);
		break;
	case PlayerTank:
		obj.moveObjectXY(1, obj.getDirection());
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
		break;
	case EnemyTank:
		obj.moveObjectXY(1, obj.getDirection());
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
		break;
	case BrickObject:
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(BrickObject);
		break;
	case BulletObject:
		obj.moveObjectXY(obj.getDirection());
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(obj.getObjectId());
		break;
	case BarrelObject:
		obj.
		mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(BarrelObject);
		break;
	default:
		break;
	}*/
}

void Map::EjectObject(Basic_Object obj)
{
	mapArray[obj.getObjectX()][obj.getObjectY()] = eObj(EmptySpot);
}

void Map::ResetObject(Basic_Object obj)
{
}

void Map::RemoveObject(Basic_Object obj)
{
}


Map::~Map()
{
}
