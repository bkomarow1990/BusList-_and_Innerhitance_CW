#pragma once
#include "Lib.h"
class Bus
{
private:
	size_t number;
	string PIB;
	int number_of_route;
public:
	Bus(const size_t& number=0, const string& PIB="NoName", const int& number_of_route=0);
};

