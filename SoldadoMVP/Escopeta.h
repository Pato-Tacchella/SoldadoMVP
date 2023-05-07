#pragma once

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "weapon.h"
using namespace std;

class Escopeta : public Gun
{
public:
	Escopeta() {
		name = "Escopeta";
		shot = "Paaa..";
	};
	~Escopeta() {};

	string shooting() override { return shot; };
	string getGun() override { return name; };
};