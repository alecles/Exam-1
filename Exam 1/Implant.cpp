#include "stdafx.h"
#include "Implant.h"


Implant::Implant()
{
	nom;
	partieCorps;
	rarete;

	vitesse;
	defense;
	force;
	prix;
}

void Implant::AfficherImplants(Implant)
{
	cout << "Nom : " << nom << endl;
	cout << "Partie du corps : " << partieCorps << endl;
	cout << "Raret� : " << rarete << endl;
	cout << "Force : " << force << endl;
	cout << "D�fense : " << defense << endl;
	cout << "Vitesse : " << vitesse << endl;
	cout << "Prix : " << prix << endl;
}

Implant::~Implant()
{
}
