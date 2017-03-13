#include "Location.h"



Location::Location(std::string name) : _name(name)
{
}


Location::~Location()
{
}

std::string Location::GetLocationInfo()
{
	return _name;
}
