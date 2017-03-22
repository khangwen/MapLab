#include "Location.h"



Location::Location(std::string name, int x, int y) : _name(name), _x(x), _y(y)
{
}


Location::~Location()
{
}

std::string Location::GetLocationInfo()
{
	return _name + " (" + std::to_string(_x) + "," + std::to_string(_y) + ")";
}
