#pragma once
#include "Lib.h"
class Person
{
protected:
	static size_t counter;
	string name;
	size_t age;
	size_t id;
public:
	Person(const string& name = "NoName", const size_t& age = 0);
	void setName(const string& name);
	void setAge(const size_t& age);
	void print()const;
};

