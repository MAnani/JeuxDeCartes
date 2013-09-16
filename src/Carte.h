/*
 * Carte.h
 *
 *  Created on: 2013-09-15
 *      Author: Administrateur
 */

#ifndef CARTE_H_
#define CARTE_H_

namespace tp{
class Sorte
{
public:
	//constructeur
		Sorte();
	//destructeur

	//accesseur
		std::string getSorteDeCarte() const;
	//mutateur
private:
		std::string m_SorteDeCarte();
};

class Valeur
{
public:
	//constructeur
			Valeur();
		//destructeur

		//accesseur
			std::string getValeurDeLaCarte() const;
		//mutateur

private:
			std::string m_ValeurDeLaCarte;
};

class Carte
{
	public:
	//constructeur
		Carte();
	//destructeur

	//accesseur

	//mutateur

	private:
		Sorte m_sorte;
		Valeur m_valeur;
};
}

#endif /* CARTE_H_ */
