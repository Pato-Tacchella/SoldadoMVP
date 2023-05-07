#pragma once
#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
#include "View.h"

class Presenter
{
private:
	Soldier* soldier = nullptr;
	View* view = nullptr;
public:
	Presenter();
	~Presenter();

	void gameLogic();
};