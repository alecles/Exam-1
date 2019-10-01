#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <ctime>


using namespace std;

class Implant
{
public:
	Implant();
	~Implant();

	inline int GetForce() const { return this->force; }
	inline int GetVitesse() const { return this->vitesse; }
	inline int GetDefense() const { return this->defense; }
	inline int GetPrix() const { return this->prix; }

	void AfficherImplants(Implant);

protected:
	string nom;
	string partieCorps;
	string rarete;
	int force;
	int vitesse;
	int defense;
	int prix;
};

