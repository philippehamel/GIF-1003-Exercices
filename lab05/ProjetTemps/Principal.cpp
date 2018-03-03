/*
 * Principal.cpp
 *
 *  Created on: 2018-03-03
 *      Author: etudiant
 */

#include <iostream>
#include "Temps.h"

using namespace std;
using namespace labo;
const int TAILLETABLEAU = 5;


int main()
{
	Temps t0;
	cout << t0.reqTempsFormate() << endl;

	Temps t;
	t.setHeure(17);
	t.setMinute(34);
	t.setSeconde(25);

	cout << "Resultat d'un ajustement avec des valeurs valides:" << endl
			<< "  Heure: " << t.getHeure() << "  Minute: " << t.getMinute()
			<< "  Seconde: " << t.getSeconde();

	t.setHeure(234);
	t.setMinute(43);
	t.setSeconde(6373);

	cout << "\n\nResultat avec des valeurs non valables pour"
			<< " heure et seconde:\n  Heure: " << t.getHeure() << "  Minute: "
			<< t.getMinute() << "  Seconde: " << t.getSeconde() << endl;

	cout << endl << "constructeur avec parametres invalides" << endl;

	Temps t1(23, 58, 58);
	cout << "\t" << t1.reqTempsFormate() << " pour 23h 58mn 58s" << endl;

	Temps tableauTemps[TAILLETABLEAU];
	tableauTemps[1].setTemps(2, 3, 4);
	tableauTemps[3].setHeure(0);

	cout << endl << "tableau d'objets Temps" << endl;
	for (int i = 0; i < TAILLETABLEAU; i++)
	{
		cout << tableauTemps[i].reqTempsFormate() << endl;
	}

	return 0;
}


