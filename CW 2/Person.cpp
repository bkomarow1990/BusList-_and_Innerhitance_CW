#include "Person.h"

Person::Person(const string& name, const size_t& age)
{

	setName(name);
	setAge(age);
	++counter;
	id = counter;
}

void Person::setName(const string& name)
{
	if (name.empty())
	{
		return;
	}
	this->name = name;
}

void Person::setAge(const size_t& age)
{
	if (age != 0)
	{
		this->age = age;
	}
}

void Person::print() const
{
	cout << "Id: " << id << endl;
	cout << "Name: " << name<< endl;
	cout << "Age: " << age<< endl;

}
size_t Person::counter = 0;