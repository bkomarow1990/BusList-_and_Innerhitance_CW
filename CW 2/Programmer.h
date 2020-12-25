#pragma once
#include <vector>
#include "Person.h"
class Programmer : virtual public Person
{
public:
	Programmer(const string& name = "NoName", const size_t& age = 0, const string& language = "Windows");
	void addSkill(const string& skill);
	void print() const;
	void printSkills()const;
protected:
	vector<string> skills;
};

