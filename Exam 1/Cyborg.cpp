#include "stdafx.h"
#include "Cyborg.h"

string tabCarac[] = 
{"Renvoie les dégâts", "Gèle l'ennemi pour un tour", "Peux attaquer deux fois", "Se régénère",
"Bloque un coup sur deux", "Empoisonne l'ennemi", "Aucun"}; //7


Cyborg::Cyborg()
{
	numero = (rand() % 100) + 1;
	force = (rand() % 100) + 1;
	vitesse = (rand() % 100) + 1;
	defense = (rand() % 100) + 1;

	if (force <= 30 && vitesse <= 30 && defense <= 30)
		prix = 10;

	else if (force <= 50 && vitesse <= 50 && defense <= 50)
		prix = 30;

	else if (force <= 80 && vitesse <= 80 && defense <= 80)
		prix = 50;

	else
		prix = 75;

	caracteristique = tabCarac[rand() % 7];
}

Cyborg::Cyborg(int numero,int force,int vitesse,int defense,string caracteristique)
{
	this->numero = numero;
	this->force = force;
	this->vitesse = vitesse;
	this->defense = defense;

	if (force <= 30 && vitesse <= 30 && defense <= 30)
		this->prix = 10;

	else if (force <= 50 && vitesse <= 50 && defense <= 50)
		this->prix = 30;

	else if (force <= 80 && vitesse <= 80 && defense <= 80)
		this->prix = 50;

	else
		this->prix = 75;

	this->caracteristique = caracteristique;
}

void Cyborg::GetBilan(Cyborg)
{

	cout << "Caractéristique : " << caracteristique << endl;
	cout << "Force : " << force << endl;
	cout << "Défense : " << defense << endl;
	cout << "Vitesse : " << vitesse << endl;
	cout << "Prix : " << prix << endl;
}

void Cyborg::ConfirmerAchat()
{
	string choix = "";

	cout << "Ce cyborg coûte "<< GetPrix() <<" Or. Êtes-vous sûr de vouloir acheter ce Cyborg? O/N" << endl;
	cin >> choix;

	if (choix == "o")
	{
		cout << "Amusez-vous bien avec votre nouvel achat!" << endl;
	}

	else
	{
		cout << "1. Créer son Cyborg" << endl;
		cout << "2. Choisir un Cyborg déjà construit" << endl;
		cout << "3. Quitter" << endl;
	}		
}


Cyborg::~Cyborg()
{
}
