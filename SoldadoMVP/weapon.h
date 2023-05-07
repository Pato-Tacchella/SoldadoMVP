#pragma once

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Gun
{
protected:
	string name;
	string shot;
public:
	Gun() {};
	~Gun() {};

	virtual string shooting() { return 0; };
	virtual string getGun() { return 0; };
};