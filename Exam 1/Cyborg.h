#pragma once
#include <string>
#include <iostream> 
#include <vector>  
#include <algorithm>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <ctime>
#include <list>

#include "Implant.h"


using namespace std;

class Cyborg
{
public:
	Cyborg();
	Cyborg(int numero, int force, int vitesse, int defense, string caracteristique);
	~Cyborg();

	inline int GetNumero() const { return this->numero; }
	inline int GetForce() const { return (monImplant->GetForce() + this->force); }
	inline int GetVitesse() const { return (monImplant->GetVitesse() + this->vitesse); }
	inline int GetDefense() const { return (monImplant->GetDefense() + this->defense); }
	inline int GetPrix() const { return (monImplant->GetPrix() + this->prix); }
	inline string GetCarac() const { return this->caracteristique; }

	void GetBilan(Cyborg);
	void ConfirmerAchat();

protected:

	Implant* monImplant;

	int numero;
	int force;
	int vitesse;
	int defense;
	int prix;
	string caracteristique;
};

