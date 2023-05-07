#pragma once

#include <iostream>
#include <stdlib.h>
#include "Revolver.h"
#include "Escopeta.h"
#include "Rifle.h"

using namespace std;

class Soldier
{
	Gun* gun = nullptr;
	string weapon;
	string shot;
public:
	Soldier();
	~Soldier();

	bool haveWeapon();
	void chooseWeapon(int n);
	void clearWeapon();
	string getWeapon();
	string trigger();
};