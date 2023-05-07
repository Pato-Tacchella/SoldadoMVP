#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class View
{
public:
	View() {};
	~View() {};
	void menuPrin();
	void chopseGun();
	void noGun();
	void lookGun(string gunName);
	void shot(string gunShot);
	
};