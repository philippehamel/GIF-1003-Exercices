/*
 * Sphere.cpp
 *
 *  Created on: 2018-03-02
 *      Author: etudiant
 */

#include "Sphere.h"
#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;
namespace math {

Sphere::Sphere(double p_rayon): m_rayon(p_rayon)
{}

double Sphere::reqRayon() const {
	return m_rayon;
}

void Sphere::asgRayon(double p_nouveauRayon) {
}

double Sphere::volumeSphere() const {
	double volume;
	volume = (4.0 / 3.0) * (3.14159 * pow(m_rayon, 3));
	return volume;
}

std::string Sphere::reqVolumeFormate() const {
	ostringstream os;
	os << "Le volume de la sphere de rayon: " << reqRayon() << " est de: "
			<< volumeSphere() << endl;
	return os.str();
}

} /* namespace math */
