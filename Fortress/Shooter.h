#pragma once
#include <iostream>
using namespace std;
class Shooter
{
private:
	string name;
	size_t count;
public:
	Shooter(const string& name="NoNameShooter",const size_t& count=0);
	void shoot();
	void giveAmunition(const string& name,const size_t& count);
};

inline Shooter::Shooter(const string& name, const size_t& count) :name(name),count(count){}

inline void Shooter::shoot()
{
	if (count==0)
	{
		cout << "Haven`t Amunition" << endl;
		return;
	}
	--count;
	cout << "Shoot from :" << name << endl;
}

inline void Shooter::giveAmunition(const string& name, const size_t& count)
{
	if (!this->name.empty())
	{
		this->name = name;
		this->count = count;
	}
	else {
		cout << "Incorrect name" << endl;
		return;
	}
}
