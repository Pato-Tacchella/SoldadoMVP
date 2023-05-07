#include "Presenter.h"

int main()
{
	Presenter* presenter = new Presenter;

	presenter->gameLogic();

	delete presenter;

}