#pragma once
#include <iostream>
#include "Shooter.h"
using namespace std;

// Archer

class Archer :  public virtual Shooter
{
public:
	Archer(const string& name = "NoNameArcher", const size_t& count = 0) :Shooter(name, count) {}
	void shoot();
private:
};

// RANGE

class Range :   public virtual Shooter
{
public:
	Range(const string& name="NoNameRange",const size_t& count=0) :Shooter(name,count) {}
	void shoot();
private:
};

//CATAPULT

class Catapult : public Shooter
{
public:
	Catapult(const string& name = "NoNameCatapult", const size_t& count = 0) :Shooter(name, count) {}
	void shoot();
private:
};
class ArcherTower : public Archer, public Range {
public:
	ArcherTower(const string& name = "NoNameArcherTower",const size_t& count=0)
		:Shooter(name,count),Archer(name,count),Range(name,count)
	{
			
	}
	void shoot() {
		Archer::shoot();
		Range::shoot();
	}
private:
};