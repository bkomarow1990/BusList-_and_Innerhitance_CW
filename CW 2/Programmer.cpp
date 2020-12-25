#include "Programmer.h"

Programmer::Programmer(const string& name, const size_t& age, const string& language)
	:Person(name,age)
{
	addSkill(language);
}

void Programmer::addSkill(const string& skill)
{
	if (!skill.empty())
	{
		skills.push_back(skill);
	}
}

void Programmer::print() const
{
	cout << "Programmer: " << endl;
	Person::print();
	cout << "With skills: " << endl;
	printSkills();
}

void Programmer::printSkills() const
{
	for (const auto& i : skills)
	{
		cout << i<<"\t";
	}
	cout << endl;
}
