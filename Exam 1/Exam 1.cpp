// Exam 1.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"

#include "Cyborg.h"

int main()
{
	vector<Cyborg> tabCyborg;

	for (int i = 0; i <= 25; i++)
	{
		tabCyborg.push_back(5);
	}

	
	int i = 0;
	int choix = 0;

	cout << "1. Créer son Cyborg" << endl;
	cout << "2. Choisir un Cyborg déjà construit" << endl;
	cout << "3. Quitter" << endl << endl;

	cin >> choix;

	cout << "" << endl;

	if (choix == 1)
	{
		
		int numero1 = 0;
		int force1 = 0;
		int vitesse1 = 0;
		int defense1 = 0;
		int prix1 = 0;
		string caracteristique1 = "";

		cout << "Veuillez configurer son numéro (1-100)" << endl;
		cin >> numero1;
		cout << "" << endl;

		cout << "Veuillez configurer sa force (1-100)" << endl;
		cin >> force1;
		cout << "" << endl;

		cout << "Veuillez configurer sa vitesse (1-100)" << endl;
		cin >> vitesse1;
		cout << "" << endl;

		cout << "Veuillez configurer sa défense (1-100)" << endl;
		cin >> defense1;
		cout << "" << endl;

		cout << "Veuillez choisir une caractéristique ( À vous d'inventer ! )" << endl;
		cin >> caracteristique1;
		cout << "" << endl;

		Cyborg* cyborg1 = new Cyborg(numero1,force1,vitesse1,defense1,caracteristique1);

		cyborg1->ConfirmerAchat();

	}

	else if (choix == 2)
	{
		do
		{
			tabCyborg[i].GetBilan(tabCyborg[i]);
			cout << "" << endl;
			i++;
		}

		while (tabCyborg.size);

		cout << "Veuillez choisir un cyborg" << endl;
		cin >> choix;

		tabCyborg[choix].ConfirmerAchat();
	}
	
	else
	{
		cout << "Appuyer sur une touche pour quitter";
		getchar();
		return 0;
	}		
}

