/*
 * principal.cpp
 *
 *  Created on: 2018-02-27
 *      Author: etudiant
 */

#include <iostream>
#include "fonction.h"

using namespace std;

int main() {
	int tableau[MAX_CASES];
	float moy;
	int nb;

	saisi_donnees(&nb, tableau);
	moy = moyenne(nb, tableau);
	affichage(nb, moy, tableau);

	return 0;
}

