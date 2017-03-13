#include "Map.h"



Map::Map(std::string startingLocationName) 
{
	_currentLocation = new Location(startingLocationName);
}


Map::~Map()
{
}
