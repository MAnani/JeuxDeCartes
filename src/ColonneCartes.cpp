/*
 * ColonneCartes.cpp
 *
 *  Created on: 2013-09-16
 *      Author: Administrateur
 */

/**
 * \fn ColonneCartes::ColonneCartes()
 * construit une colonne de cartes vide
 */
tp::ColonneCartes::ColonneCartes()
{

}

/*!
 * \fn void ColonneCartes::initColonneCartes(Liste<Carte> & p_listeCartes)
 * initialise une colonne de cartes � partir d'une liste de cartes, une seule carte est visible
 * \param[in] p_listeCartes une liste de cartes permettant d'initialiser la colonne de cartes.
 *
 * \return N/A
 */
void tp::ColonneCartes::initColonneCartes(Liste<Carte> & p_listeCartes)
{

}

/*!
 * \fn void ColonneCartes::ajoute(const Carte& p_carte)
 *
 * \param[in]  p_carte une carte � ajouter sur le dessus de la colonne
 *
 * \return rien (inutile donc de mettre ce commentaire)
 *
 */
void tp::ColonneCartes::ajoute(const Carte& p_carte)
{

}

/*!
 * \fn void tp::ColonneCartes::deplacePaquet(ColonneCartes & p_destination, int p_nombreCartes)
 *
 * \param[in] p_destination :la colonne de destination
 * \param[in]  p_nombreCartes :  le nombre de cartes du paquet � d�placer
 *
 * \pre
 * \pre
 *
 * \post
 * \post
 *
 * \exception
 * \exception
 *
 * \return N/A
 */
void tp::ColonneCartes::deplacePaquet(ColonneCartes & p_destination, int p_nombreCartes)
{

}

/*!
 * \fn void tp::ColonneCartes::supprimeDerniereCarte()
 *
 * supprime la derni�re carte de la colonne Si la carte supprim�e est la derni�re carte visible alors la carte
 * suivante sera d�couverte
 *
 * \pre
 * \pre
 *
 * \post
 * \post
 *
 * \exception
 * \exception
 * \return N/A
 */
void tp::ColonneCartes::supprimeDerniereCarte()
{

}
/*!
 * \fn int tp::ColonneCartes::getNbCartesVisibles() const
 *
 *
 * \pre
 * \pre
 *
 * \post
 * \post
 *
 * \exception
 * \exception
 *
 * \return retourne le nombre de cartes visibles
 */
int tp::ColonneCartes::getNbCartesVisibles() const
{

}

/*!
 * \fn friend std::ostream & tp::ColonneCartes::operator<<(std::ostream & os, const ColonneCartes & p_colonneCartes)
 *
 * \param[in] p_colonneCartes la colonne � formater
 * \param[out] os  le flux contenant les donn�es format�es
 *
 * \pre
 * \pre
 *
 * \post
 * \post
 *
 * \exception
 * \exception
 * \return un flux de sortie pour les appels en cascade
 */
friend std::ostream & tp::ColonneCartes::operator<<(std::ostream & os, const ColonneCartes & p_colonneCartes)
{

}
