/*
 * ColonneCartes.cpp
 *
 *  Created on: 2013-09-16
 *      Author: Administrateur
 */

/**
 * \fn ColonneCartes::ColonneCartes()
 * CONSTRUCTEUR par default
 */
tp::ColonneCartes::ColonneCartes()
{

}

/**
 * \fn void ColonneCartes::initColonneCartes(Liste<Carte> & p_listeCartes)
 * initialise une colonne de cartes à partir d'une liste de cartes, une seule carte est visible
 * \param[in] p_listeCartes une liste de cartes permettant d'initialiser la colonne de cartes.

 * \return N/A
 */
void tp::ColonneCartes::initColonneCartes(Liste<Carte> & p_listeCartes)
{

}

/**
 * \fn void ColonneCartes::ajoute(const Carte& p_carte)
 *
 * \param[in]  p_carte une carte à ajouter sur le dessus de la colonne
 *
 * \return rien (inutile donc de mettre ce commentaire)
 */
void ColonneCartes::ajoute(const Carte& p_carte)
{

}

/**
 * \fn void ColonneCartes::deplacePaquet(ColonneCartes & p_destination, int p_nombreCartes)
 *
 * \param[in] p_destination :la colonne de destination
 * \param[in] int p_nombreCartes :  le nombre de cartes du paquet à déplacer
 *
 * \return N/A
 */
void ColonneCartes::deplacePaquet(ColonneCartes & p_destination, int p_nombreCartes)
{

}

/**
 * \fn void ColonneCartes::supprimeDerniereCarte()
 *	supprime la dernière carte de la colonne Si la carte supprimée est la dernière carte visible alors la carte
 *  suivante sera découverte
 *
 * \return N/A
 */
void ColonneCartes::supprimeDerniereCarte()
{

}
/**
 * \fn int tp::ColonneCartes::getNbCartesVisibles() const
 *
 *
 * \return retourne le nombre de cartes visibles
 */

int tp::ColonneCartes::getNbCartesVisibles() const
{

}

/**
 * \fn friend std::ostream & ColonneCartes::operator<<(std::ostream & os, const ColonneCartes & p_colonneCartes)
 *
 * \param[in] x Élément à ajouter
 * \param[in] p_colonneCartes la colonne à formater
 * \param[out]  os  le flux contenant les données formatées
 *
 * \return un flux de sortie pour les appels en cascade
 */
friend std::ostream & ColonneCartes::operator<<(std::ostream & os, const ColonneCartes & p_colonneCartes)
{

}
