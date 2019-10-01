#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include<iomanip>


#include "Implant.h"

using namespace std;

class Jambes : public Implant
{
public:
	Jambes();
	~Jambes();

protected:
	string nom;
	string partieCorps;
	string rarete;
	int force;
	int vitesse;
	int defense;
	int prix;
};

