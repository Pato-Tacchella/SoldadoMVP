#include <iostream>
#include <stdlib.h>
#include "Soldier.h"


Soldier::Soldier()
{
	weapon = "";
	shot = "";
}

Soldier::~Soldier()
{
	delete gun;
}

bool Soldier::haveWeapon()
{
	if (weapon.empty())
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Soldier::chooseWeapon(int n)
{
	switch (n)
	{
	case 1: {
		std::shared_ptr<Revolver> gun{ new Revolver };
		weapon = gun->getGun();
		shot = gun->shooting();


	} break;
	case 2:
	{
		std::shared_ptr<Rifle> gun{ new Rifle };
		weapon = gun->getGun();
		shot = gun->shooting();

	} break;
	case 3:
	{
		std::shared_ptr<Escopeta> gun{ new Escopeta };
		weapon = gun->getGun();
		shot = gun->shooting();

	} break;
	default:
		break;
	}
}

void Soldier::clearWeapon()
{
	delete gun;
	weapon = "";
	shot = "";
}

string Soldier::getWeapon()
{
	return weapon;
}


string Soldier::trigger()
{
	return shot;
}