/*
 * fonctions.cpp
 *
 *  Created on: 2018-02-27
 *      Author: etudiant
 */

#include <string>
#include <sstream>
#include <iostream>
#include "fonctions.h"

using namespace std;

void convert_chaine(std::string chaine) {
	istringstream is_chaine(chaine);
	int reference;
	is_chaine >> reference;

	int quantite;
	is_chaine >> quantite;

	float prix;
	is_chaine >> prix;

	char buffer[256];
	is_chaine.ignore();
	is_chaine.getline(buffer, 255);
	string designation = buffer;

	cout << "Reference: " << reference << endl;
	cout << "Quantite: " << quantite << endl;
	cout << "Prix: " << prix << endl;
	cout << "Designation: " << designation << endl;

}

