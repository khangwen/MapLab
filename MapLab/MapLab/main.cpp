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
		cin >> choice;

		switch (choice)
		{
		case 1: cout << map.CurrentLocation->GetLocationInfo() << endl; break;
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
	int currentX = map.CurrentLocation->getX();
	int currentY = map.CurrentLocation->getY();

	system("cls");
	if (map.CurrentLocation->North == nullptr)
	{
		int newX = currentX;
		int newY = currentY + 1;

		cout << "You haven't been here before. Enter a Name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->North = new Location(newName, newX, newY);
		map.CurrentLocation->North->South = map.CurrentLocation;
	}

	map.CurrentLocation = map.CurrentLocation->North;
	cout << "You are now at " + map.CurrentLocation->GetLocationInfo() << endl;
	map.Path.push(map.CurrentLocation);
}

void GoEast(Map & map)
{
	int currentX = map.CurrentLocation->getX();
	int currentY = map.CurrentLocation->getY();

	system("cls");
	if (map.CurrentLocation->East == nullptr)
	{
		int newX = currentX + 1;
		int newY = currentY;

		cout << "You haven't been here before. Enter a Name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->East = new Location(newName, newX, newY);
		map.CurrentLocation->East->West = map.CurrentLocation;
	}

	map.CurrentLocation = map.CurrentLocation->East;
	cout << "You are now at " + map.CurrentLocation->GetLocationInfo() << endl;
	map.Path.push(map.CurrentLocation);
}

void GoSouth(Map & map)
{
	int currentX = map.CurrentLocation->getX();
	int currentY = map.CurrentLocation->getY();

	system("cls");
	if (map.CurrentLocation->South == nullptr) 
	{
		int newX = currentX;
		int newY = currentY - 1;

		cout << "You haven't been here before. Enter a Name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->South = new Location(newName, newX, newY);
		map.CurrentLocation->South->North = map.CurrentLocation;
	}

	map.CurrentLocation = map.CurrentLocation->South;
	cout << "You are now at " + map.CurrentLocation->GetLocationInfo() << endl;
	map.Path.push(map.CurrentLocation);
}

void GoWest(Map & map)
{
	int currentX = map.CurrentLocation->getX();
	int currentY = map.CurrentLocation->getY();

	system("cls");
	if (map.CurrentLocation->West == nullptr)
	{
		int newX = currentX - 1;
		int newY = currentY;

		cout << "You haven't been here before. Enter a Name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->West = new Location(newName, newX, newY);
		map.CurrentLocation->West->East = map.CurrentLocation;
	}

	map.CurrentLocation = map.CurrentLocation->West;
	cout << "You are now at " + map.CurrentLocation->GetLocationInfo() << endl;
	map.Path.push(map.CurrentLocation);
}

void PathToHome(Map & map)
{
	std::stack<Location *> toHomePath;
	toHomePath = map.Path;

	cout << "You are currently at " + map.CurrentLocation->GetLocationInfo() << endl;

	while (toHomePath.empty == false)
	{
		int currentX = toHomePath.top()->getX;
		int currentY = toHomePath.top()->getY;

		toHomePath.pop();

		int oldX = toHomePath.top()->getX;
		int oldY = toHomePath.top()->getY;

		if (oldX < currentX)
			cout << "Go East" << endl;
		else if (oldX > currentX)
			cout << "Go West" << endl;
		else if (oldY < currentY)
			cout << "Go South" << endl;
		else if (oldY > currentY)
			cout << "Go North" << endl;
	}
}
