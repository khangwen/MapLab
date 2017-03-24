#include "Map.h"



Map::Map(std::string startingLocationName) 
{
	CurrentLocation = new Location(startingLocationName, 0, 0);
	_mapLookup["0,0"] = CurrentLocation;
	Path.push(CurrentLocation);
}


Map::~Map()
{
}

void Map::setMapLookUp(Location * newLocation, int x, int y)
{
	std::string hash = "(" + std::to_string(x) + "," + std::to_string(y) + ")";
	_mapLookup[hash] = newLocation;
}

Location * Map::LookupLocation(int x, int y)
{
	std::string hash = "(" + std::to_string(x) + "," + std::to_string(y) + ")";
	return _mapLookup[hash];
}


