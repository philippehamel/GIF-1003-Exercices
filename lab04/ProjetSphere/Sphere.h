/*
 * Sphere.h
 *
 *  Created on: 2018-03-02
 *      Author: etudiant
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include <string>

namespace math {

class Sphere {
public:
	Sphere(double p_rayon=0); //constructeur avec paramètre
	double reqRayon() const;
	void asgRayon(double p_nouveauRayon);
	double volumeSphere() const; //calcul du volume
	std::string reqVolumeFormate() const; // affichage en chaîne de caractère

private:
	double m_rayon;
};

} /* namespace math */

#endif /* SPHERE_H_ */