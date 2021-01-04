#include "Units.h"

void Archer::shoot()
{
	cout << "Archer is shoot" << endl;
	Shooter::shoot();
}

void Range::shoot()
{
	cout << "Range is shoot" << endl;
	Shooter::shoot();
}

void Catapult::shoot()
{
	cout << "Catapult is shoot" << endl;
	Shooter::shoot();
}
