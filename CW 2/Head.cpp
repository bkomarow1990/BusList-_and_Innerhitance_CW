#include "Head.h"

Head::Head(const string& name, const size_t& age, const size_t& experience)
	:Person(name,age)
{
	setExperience(experience);
}

void Head::setExperience(const size_t& exp)
{
	if ((int)exp<=(int)age-18)
	{
		this->experience = exp;
	}
}

void Head::print() const
{
	cout << "-----Head-----" << endl;
	Person::print();
	cout << "Experience as a head " << experience << endl;
}
