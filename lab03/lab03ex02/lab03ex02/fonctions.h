/*
 * fonctions.h
 *
 *  Created on: 2018-02-27
 *      Author: etudiant
 */

#ifndef FONCTIONS_H_
#define FONCTIONS_H_

const int MAX_CASES = 2;

void saisir_matrice(int p_matA[MAX_CASES][MAX_CASES], int p_matB[MAX_CASES][MAX_CASES]);
void somme(int p_matA[MAX_CASES][MAX_CASES], int p_matB[MAX_CASES][MAX_CASES], int p_matC[MAX_CASES][MAX_CASES]);
void affiche(int p_matC[MAX_CASES][MAX_CASES]);

#endif /* FONCTIONS_H_ */
