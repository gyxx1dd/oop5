#include <iostream>

using namespace std;


class Mammals
{
public:
	virtual void info() = 0;
};


class Human:public Mammals
{
public:
	void info() override
	{
		cout << "this is info about human..." << endl;
	}
};

class Animals:public Mammals
{

};

class Horse :public Animals
{
public:
	void info() override
	{
		cout << "this is info about horse.." << endl;
	}
};


class Cow :public Animals
{
public:
	void info() override
	{
		cout << "this is info about cow..." << endl;
	}

};


class FullInfo:public Human, public Horse, public Cow
{
public:

};




int main()
{
	FullInfo a;
	a.Human::info();
	a.Horse::info();
	a.Cow::info();



	return 0;
}