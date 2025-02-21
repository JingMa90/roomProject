#include "Room.h"

//Jing Ma
//Testing Room and Office class

void show(const Room* roomPtr)
{
	roomPtr->showInfo(cout);
//	delete roomPtr;
}

int main()
{
	Room* livingRoom = new Room("Living Room", 150);
	assert(livingRoom);

	Office* deansOffice = new Office("Dean's Office", 100, 2, 3);
	assert(deansOffice);

	ClassRoom* classRoom1 = new ClassRoom;
	assert(classRoom1);

	ClassRoom classRoom2;

	//livingRoom->showInfo(cout);
	//deansOffice->showInfo(cout);

	cout << endl << "calling show function" << endl;
	show(livingRoom);
	show(deansOffice);

	show(classRoom1);
	show(&classRoom2);
	cout << endl << endl;

	//delete livingRoom;
	//delete deansOffice;


	system("pause");
}