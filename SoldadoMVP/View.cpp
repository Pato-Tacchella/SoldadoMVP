#include "View.h"

void View::menuPrin()
{
	cout << " -== Bienvenido al campo de entrenamiento, Soldado ==- \n\n";

	cout << "que desea hacer? \n"
		<< "(presione el numero correspondiente a la opcion del menu)\n"
		<< "\n"
		<< "1. Recoger arma\n"
		<< "2. Dejar arma\n"
		<< "3. Disparar\n"
		<< "4. Ver arma en uso\n"
		<< "0. Salir \n";
}

void View::chopseGun()
{
	cout << "Por favor, escoja el arma que desea utilizar: \n"
		<< "\n"
		<< "1. Revolver\n"
		<< "2. Rifle\n"
		<< "3. Escopeta\n"
		<< "0. Volver atras \n";
}

void View::noGun()
{
	cout << "Usted no posee ningun arma en su inventario\n";
}

void View::lookGun(string gunName)
{
	cout << "Usted tiene equipada: " << gunName << "\n";
}


void View::shot(string gunShot)
{
	cout << gunShot;
}


