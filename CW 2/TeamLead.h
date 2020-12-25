#pragma once
#include "Head.h"
#include "Programmer.h"
class TeamLead : public Head, public Programmer
{
public:
	static const size_t MAX_SIZE_TEAM = 15;
	void print()const;
	void setSizeTeam(const size_t& size_team);
	TeamLead(const string& name = "NoName", const size_t & age = 0, const size_t & experience = 0, const string & skill = "C++", const size_t & size_team = 0);
private:
	size_t capacityTeam;
};
inline TeamLead::TeamLead(const string& name ,const size_t& age, const size_t& experience, const string& skill, const size_t& size_team) 
	:Person(name,age),Head("",0,5),Programmer("***",1,skill)
{
	setSizeTeam(size_team);
}
