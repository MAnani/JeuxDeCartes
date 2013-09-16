/*
 * ColonneCartes.h
 *
 *  Created on: 2013-09-15
 *      Author: Administrateur
 */

#ifndef COLONNECARTES_H_
#define COLONNECARTES_H_

class ColonneCartes
{
	public:
	//constructeur
	 void initColonneCartes(Liste<Carte> & p_listeCartes);
	 ColonneCartes();
	//destructeur

	//accesseur
	 int getNbCartesVisibles() const;
	//mutateur
	 void ajoute(const Carte& p_carte);
	 void deplacePaquet(ColonneCartes & p_destination, int p_nombreCartes);
	 void supprimeDerniereCarte();
	 friend std::ostream & operator<<(std::ostream & os, const ColonneCartes & p_colonneCartes);

	private:
	 Liste<Carte> m_lesCartes;
	 int m_nbCartesVisibles;


};

#endif /* COLONNECARTES_H_ */
