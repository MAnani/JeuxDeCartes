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
 * \fn void Liste<T>:: ajouter (T x, int pos)
 *
 * \param[in] x Élément à ajouter
 * \param[in] pos Position où insérer l'élément
 * \param[out] aucun paramètre en argument pour effectuer une sortie (inutile donc de mettre ce commentaire)
 *
 * \return rien (inutile donc de mettre ce commentaire)
 */
void ColonneCartes::ajoute(const Carte& p_carte)
{

}

/**
 * \fn void Liste<T>:: ajouter (T x, int pos)
 *
 * \param[in] x Élément à ajouter
 * \param[in] pos Position où insérer l'élément
 * \param[out] aucun paramètre en argument pour effectuer une sortie (inutile donc de mettre ce commentaire)
 *
 * \return rien (inutile donc de mettre ce commentaire)
 */
void ColonneCartes::deplacePaquet(ColonneCartes & p_destination, int p_nombreCartes)
{

}
/**
 * \fn void Liste<T>:: ajouter (T x, int pos)
 *
 * \param[in] x Élément à ajouter
 * \param[in] pos Position où insérer l'élément
 * \param[out] aucun paramètre en argument pour effectuer une sortie (inutile donc de mettre ce commentaire)
 *
 * \return rien (inutile donc de mettre ce commentaire)
 */

void ColonneCartes::supprimeDerniereCarte()
{

}
/**
 * \fn int tp::ColonneCartes::getNbCartesVisibles() const
 *
 *
 * \return rien (inutile donc de mettre ce commentaire)
 */

int tp::ColonneCartes::getNbCartesVisibles() const
{

}

/**
 * \fn void Liste<T>:: ajouter (T x, int pos)
 *
 * \param[in] x Élément à ajouter
 * \param[in] pos Position où insérer l'élément
 * \param[out] aucun paramètre en argument pour effectuer une sortie (inutile donc de mettre ce commentaire)
 *
 * \return rien (inutile donc de mettre ce commentaire)
 */

friend std::ostream & ColonneCartes::operator<<(std::ostream & os, const ColonneCartes & p_colonneCartes)
{

}
