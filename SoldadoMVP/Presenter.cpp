#include "Presenter.h"

Presenter::Presenter()
{
	view = new View;
	soldier = new Soldier;
}

Presenter::~Presenter()
{
	delete view, soldier;
}

void Presenter::gameLogic()
{
	int opcion;
	
	
	do
	{
		system("cls");
		view->menuPrin();
		cin >> opcion;

		switch (opcion)
		{
		case 1:
		{
			system("cls");
			if (!soldier->haveWeapon())
			{
				int op2;
				view->chopseGun();
				cin >> op2;
				soldier->chooseWeapon(op2);
			}
			else
			{
				view->lookGun(soldier->getWeapon());
			}
			system("pause");
		} break;

		case 2:
		{
			system("cls");
			view->noGun();
			soldier->clearWeapon();
			system("pause");
		} break;

		case 3: {
			system("cls");
			if (soldier->haveWeapon())
			{
				view->shot(soldier->trigger());
			}
			else
			{
				view->noGun();
			}
			system("pause");
		} break;

		case 4:
		{
			system("cls");
			view->lookGun(soldier->getWeapon());
			system("pause");
		} break;

		default: { }break;
		}
	} while (opcion != 0);
}
