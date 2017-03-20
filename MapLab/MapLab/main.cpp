#include <iostream>
#include <string>
#include "Map.h"

using namespace std;

void GoNorth(Map &map);
void GoEast(Map &map);
void GoSouth(Map &map);
void GoWest(Map &map);
void PathToHome(Map &map);

int main()
{
	Map map = Map("Home");

	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "Choose an option" << endl;
		cout << "0) Exit" << endl;
		cout << "1) Get Current Location Info" << endl;
		cout << "2) Go North" << endl;
		cout << "3) Go East" << endl;
		cout << "4) Go South" << endl;
		cout << "5) Go West" << endl;
		cout << "6) Path to Home" << endl;
		cout << "0) Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: break;
		case 1: cout << map.CurrentLocation->GetLocationInfo() << endl;
		case 2: GoNorth(map); break;
		case 3: GoEast(map); break;
		case 4: GoSouth(map); break;
		case 5: GoWest(map); break;
		case 6: PathToHome(map); break;
		default: cout << "Please enter a valid option" << endl; break;
		}

		system("pause");
	}

	system("pause");
	return 0;
}

void GoNorth(Map & map)
{
	system("cls");
	Location newLocation = Location("North of Home");
	map.CurrentLocation = &newLocation;
}

void GoEast(Map & map)
{
}

void GoSouth(Map & map)
{
}

void GoWest(Map & map)
{
}

void PathToHome(Map & map)
{
}
