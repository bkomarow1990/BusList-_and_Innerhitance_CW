#pragma once
#include <iostream>
#include "Units.h"
using namespace std;
class Fortress : public ArcherTower, public Catapult
{
public:
	Fortress(
	const size_t& arrows,const size_t& stones,
	const size_t& wall_thickness, const size_t& condition_gate,
	const size_t& fence_height)
		:ArcherTower("ArcherTower",arrows),
		Catapult("Catapult",stones),
		fence_height(fence_height),
		condition_gate(condition_gate),
		wall_thickness(wall_thickness)
	{}
private:
	size_t wall_thickness; // 0 - ...
	size_t condition_gate; // 0% - 100%
	size_t fence_height; // 0 - ...
};

