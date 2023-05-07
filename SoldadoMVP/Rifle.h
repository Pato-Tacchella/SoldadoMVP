#pragma once

#include <iostream>
#include <stdlib.h>
#include "weapon.h"

using namespace std;

class Rifle : public Gun
{
public:
	Rifle() {
		name = "Rifle";
		shot = "Pum pum pum..";
	};
	~Rifle() {};

	string shooting() override { return shot; };
	string getGun() override { return name; };
};