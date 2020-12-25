#include "Mother.h"

void Mother::setName(const string& name)
{
	if (name.empty())
	{
		return;
	}
	this->name = name;
}

void Mother::print() const
{
	cout << "Mother name : " << name << endl;
}

void Father::setName(const string& name)
{
	if (name.empty())
	{
		return;
	}
	this->name = name;
}

void Father::print() const
{
	cout << "Father name: " << name << endl;
}

Child::Child(const string& f_name, const string& m_name,const size_t& age)
	:Mother(m_name),Father(f_name),age(age)
{

}

void Child::print() const
{
	Father::print();
	Mother::print();
}
