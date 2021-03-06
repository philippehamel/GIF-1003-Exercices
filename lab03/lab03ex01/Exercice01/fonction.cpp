/*
 * fonction.cpp
 *
 *  Created on: 2018-02-27
 *      Author: etudiant
 */

#include <iostream>
#include "fonction.h"

using namespace std;

void saisi_donnees(int* p_nb, int p_tableau[]) {
	cout << "Quel est la taille du tableau?" << endl;
	do {
		cout << "Choisis un nombre entre 0 et " << MAX_CASES << " :" << endl;
		cin >> *p_nb;
	} while (*p_nb < 0 || *p_nb > MAX_CASES);
	for (int i = 0; i < *p_nb; i++) {
		cout << "Quel est la note a la position " << i + 1 << "?" << endl;
		cin >> p_tableau[i];
	}
}

float moyenne(int p_nb, int p_tableau[]) {
	float moyenne = 0.0;
	float somme = 0;
	for (int i = 0; i < p_nb; i++) {
		somme += p_tableau[i];
	}
	moyenne = somme / p_nb;

	return moyenne;
}

void affichage(int p_nb, float p_moy, int p_tableau[]) {
	float ecart;
	cout << "La moyenne des " << p_nb << " notes est : " << p_moy << endl;
	for (int i = 0; i < p_nb; i++) {
		ecart = p_moy - p_tableau[i];
		cout << "L'ecart entre la note " << i + 1 << " et la moyenne est : "
				<< ecart << endl;
	}
}

