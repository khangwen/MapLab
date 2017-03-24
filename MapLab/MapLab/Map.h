#pragma once
#include "Location.h"
#include <stack>
#include <unordered_map>

class Map
{
private:
	std::unordered_map<std::string, Location *> _mapLookup;
public:
	Map(std::string startingLocationName);
	~Map();

	void setMapLookUp(Location * newLocation, int x, int y);
	Location * LookupLocation(int x, int y);
	Location * CurrentLocation = nullptr;
	std::stack<Location *> Path;
};

