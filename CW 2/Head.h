#pragma once
#include "Lib.h"
#include "Person.h"
class Head : virtual public Person
{
protected:
	size_t experience;
public:
	Head(const string& name = "NoName", const size_t& age = 0, const size_t& experience=0);
	void setExperience(const size_t& exp);
	void print()const;
};

