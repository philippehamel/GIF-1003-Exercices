/*
 * Principale.cpp
 *
 *  Created on: 2018-03-02
 *      Author: etudiant
 */

#include <iostream>
#include "Sphere.h"

using namespace std;

int main () {
	math::Sphere maSphere(4);
	cout<<maSphere.reqVolumeFormate();
	return 0;
}


