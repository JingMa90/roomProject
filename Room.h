#include <iostream>
#include <string>
#include <cassert>

using namespace std;

//Jing Ma
//learning about virtual functions

class Room
{
public:
	Room();
	Room(string /*desc*/, int /*sqFt*/);
	virtual ~Room();
	int getSqFt() const { return sqFt; }
	string getDesc() const { return *desc; }
	virtual void showInfo(ostream& /*file or cout*/) const;
protected:
	string* desc;
	int sqFt;
};

class Office :public Room
{
public:
	Office(string /*desc*/, int /*sqFt*/,
		int /*noWindows*/, int /*noChairs*/);
	~Office();
	void showInfo(ostream& /*file or cout*/) const;
private:
	int noWindows;
	int* noChairs;
};

class ClassRoom :public Room
{
public:
	ClassRoom();
	ClassRoom(string /*desc*/, int /*sqFt*/, int /*noDesks*/);
	~ClassRoom();
	int getNoDesks() const { return *noDesks; }
	void showInfo(ostream& /*file or cout*/) const;
private:
	int* noDesks;
};

