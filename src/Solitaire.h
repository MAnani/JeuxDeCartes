/*
 * Solitaire.h
 *
 *  Created on: 2013-09-15
 *      Author: Administrateur
 */

#ifndef SOLITAIRE_H_
#define SOLITAIRE_H_

namespace tp{
class Solitaire
{
public:
// constructeur
	Solitaire();
// methodes
	void avancerTalon ();
	void deplacerColonneAColonne ( int  p_colonneSource,  int  p_colonneDestination, int  p_nbCartes);
	void deplacerTalonAColonne ( int  p_colonneDestination);
	void deplacerTalonAPile ( int  p_pileDestination );
	void deplacerColonneAPile ( int  p_colonneSource, int  p_pileDestination  );
	bool verifieGagne () const;
	std::string reqEtatJeu () const;
private:
	File<Carte> m_talon;
	ColonneCartes m_colonnes[7];
	Pile<Carte> m_piles[4];
}
}
#endif /* SOLITAIRE_H_ */
