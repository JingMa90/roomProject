#include "Room.h"


//Jing Ma
//implementation file for Virtual Function lecture

Room::Room()
{
	desc = new string("No Desc");
	assert(desc);
	sqFt = 0;
}

Room::Room(string initialDesc, int initialSqFt)
{
	cout << "Inside non-default Room constructor" << endl;
	sqFt = (initialSqFt >= 0) ? initialSqFt : 0;
	desc = new string((initialDesc.length() == 0) ? "No Desc" : initialDesc);
	assert(desc);
}

Room::~Room()
{
	cout << "Inside Room class destructor" << endl;
	delete desc;
}

void Room::showInfo(ostream& out) const
{
	out << *desc << " has " << sqFt << " square feet " << endl;
}

Office::Office(string initialDesc, int initialSqFt,
	int initialNoWindows, int initialNoChairs)
	:Room(initialDesc, initialSqFt)
{
	cout << "Inside Office class non-default constructor" << endl;
	noWindows = initialNoWindows;
	noChairs = new int(initialNoChairs);
	assert(noChairs);
}

Office::~Office()
{
	cout << "Inside Office class destructor" << endl;
	delete noChairs;
}

void Office::showInfo(ostream& out) const
{
	Room::showInfo(out);
	out << "has " << noWindows << " windows and " << *noChairs << " chairs " << endl;
}

ClassRoom::ClassRoom()
{
	noDesks = new int(10);
	assert(noDesks);
}

ClassRoom::ClassRoom(string initialDesc, int initialSqFt, int initialNoDesks)
	:Room(initialDesc, initialSqFt)
{
	noDesks = new int(initialNoDesks);
	assert(noDesks);
}

ClassRoom::~ClassRoom()
{
	cout << "Inside Classroom class destructor" << endl;
	delete noDesks;
}

void ClassRoom::showInfo(ostream& out) const
{
	Room::showInfo(out);
	out << "has " << *noDesks << " desks" << endl;
}
