#include "Map.h"



Map::Map(std::string startingLocationName) 
{
	CurrentLocation = new Location(startingLocationName, 0, 0);
	Path.push(CurrentLocation);
}


Map::~Map()
{
}


