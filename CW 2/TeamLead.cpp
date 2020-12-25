#include "TeamLead.h"

void TeamLead::print() const
{
	cout << "_____Team Lead_____" << capacityTeam << endl;
	cout << name << endl;
	cout << age << endl;
	cout << "Experience : " << experience << endl;
	printSkills();
}

void TeamLead::setSizeTeam(const size_t& size_team)
{
	if (size_team> MAX_SIZE_TEAM)
	{
		this->capacityTeam = size_team;
	}
	else {
		this->capacityTeam = size_team;
	}
}
