#pragma once
#include "Lib.h"
class Mother
{
private:
	string name;
public:
	Mother(const string& name = "NoName") 
		:name(name)
	{
		cout << "Ctor for mother " << name << endl;
	}
	void setName(const string& name);
	void print() const;
	~Mother() {
		cout << "Dtor for mother: " <<name<< endl;
	}
};
class Father {
private:
	string name;
public:
	Father(const string& name = "NoName")
		:name(name)
	{
		cout << "Ctor for father " << name << endl;
	}
	void setName(const string& name);
	void print() const;
	~Father() {
		cout << "Dtor for father: " << name << endl;
	}
};
class Child : protected Father, protected Mother {
public:
	Child(const string & f_name="Son of Ivan", const string& m_name="Son of Mother",const size_t& age=1);
	void print()const;
private:
	size_t age;
};