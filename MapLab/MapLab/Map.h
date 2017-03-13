#pragma once
#include "Location.h"

class Map
{
private:
	Location *_currentLocation = nullptr;
public:
	Map(std::string startingLocationName);
	~Map();

	
};

