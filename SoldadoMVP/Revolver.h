#pragma once

#include <iostream>
#include <stdlib.h>
#include "weapon.h"

using namespace std;

class Revolver : public Gun
{
public:
	Revolver() {
		name = "Revolver";
		shot = "Pum..";
	};
	~Revolver() {};

	string shooting() override { return shot; };
	string getGun() override { return name; };
};