/*
 * Temps.h
 *
 *  Created on: 2018-03-03
 *      Author: etudiant
 */

#ifndef TEMPS_H_
#define TEMPS_H_

#include <string>

namespace labo {

class Temps {
public:
	Temps();
	Temps(int p_heure, int p_minute, int p_seconde);

	std::string reqTempsFormate();

	int getHeure() const;
	void setHeure(int p_heure);

	int getMinute() const;
	void setMinute(int p_minute);

	int getSeconde() const;
	void setSeconde(int p_seconde);

	void setTemps(int p_heure, int p_minute, int p_seconde);

private:
	int m_seconde;
	int m_minute;
	int m_heure;
};

} /* namespace labo */

#endif /* TEMPS_H_ */
