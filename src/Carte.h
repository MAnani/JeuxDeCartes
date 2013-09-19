/*
 * Carte.h
 *
 *  Created on: 2013-09-15
 *      Author: Administrateur
 */

#ifndef CARTE_H_
#define CARTE_H_
#include <iostream>

namespace tp{

class Carte
{
	enum Sorte {coeur = 1 ,
	            trefle,
	            pique,
	            carreau };
	enum Valeur	{as = 1,
				deux,
				trois,
				quatre,
				cinq,
				six,
				sept,
				huit,
				neuf,
				dix,
				valet,
				dame,
				roi };

	public:
	//constructeurs
		Carte();
		Carte(Sorte sorte, Valeur valeur);
	//destructeurs
		~Carte();
	//accesseurs
		int GetValeur();          // Get valeur de la carte.
		int GetSorte();          // Get sorte de la carte.
	//mutateurs
		void  SetValeur(Valeur nouvelleValeur);// Set valeur de la carte.
		void  SetSorte(Sorte nouvelleSorte); // Set sorte de la carte.
	//méthodes
		bool estMemeSorte(const Carte & uneCarte) const;
		bool estMemeValeur(const Carte & uneCarte) const;
		bool estSuivante(const Carte & uneCarte) const;
		bool estPrecedente(const Carte & uneCarte) const

		bool operator == (const Carte & uneCarte) const; // Operateur pour la meme carte

		void afficherCarte() const;

	private:

		Sorte m_sorte;
		Valeur m_valeur;
};
}

#endif /* CARTE_H_ */

