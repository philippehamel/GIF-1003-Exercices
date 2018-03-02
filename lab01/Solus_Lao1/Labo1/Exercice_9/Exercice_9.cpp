#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std ;

int main(void)
{
	float fa = 1.0f;
	float fb = -4.0000000f;
	float fc = 3.9999999f;
	double da = 1.0;
	double db = -4.0000000;
	double dc = 3.9999999;

	// résolution de l’équation en utilisant des variables de type float
	float d1 = fb*fb - 4.0f*fa*fc;
	float sd1 = sqrtf(d1);
	float r1 = (-fb + sd1) / (2.0f*fa);
	float r2 = (-fb - sd1) / (2.0f*fa);
	cout.precision(5);
	cout << r1 << '\t' << r2 << endl;

	// résolution de l’équation en utilisant des variables de type double
	double d2 = db*db - 4.0*da*dc;
	double sd2 = sqrt(d2);
	double r3 = (-db + sd2) / (2.0*da);
	double r4 = (-db - sd2) / (2.0*da);
	cout.precision(5);
	cout << r3 << '\t' << r4 << endl;

	return 0;
}




