#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include<iomanip>


#include "Implant.h"

using namespace std;

class T�te : public Implant
{
public:
	T�te();
	~T�te();

protected:
	string nom;
	string partieCorps;
	string rarete;
	int force;
	int vitesse;
	int defense;
	int prix;
};

