
#include"Carte.h"
using namespace std;

tp::Carte::Carte()
{
	m_valeur = as;
	m_sorte = coeur;
}

tp::Carte::Carte(Sorte sorte,Valeur valeur)
{
	m_valeur = valeur;
	m_sorte = sorte;
}

tp::Carte::~Carte()
{

}

int tp::Carte::GetValeur()
{
	return m_valeur;
}

int tp::Carte::GetSorte()
{
	return m_sorte;
}

void tp::Carte::SetValeur(Valeur nouvelleValeur)
{
	m_valeur = nouvelleValeur;
}

void tp::Carte::SetSorte(Sorte nouvelleSorte)
{
	m_sorte = nouvelleSorte;
}

bool tp::Carte::estMemeSorte(const Carte & uneCarte) const
{
	if(m_sorte == uneCarte.m_sorte)
	{
		return true;
	}
	return false;
}

bool tp::Carte::estMemeValeur(const Carte & uneCarte) const
{
	if(m_valeur == uneCarte.m_valeur)
	{
		return true;
	}
	return false;
}

bool  tp::Carte::operator == (const Carte & uneCarte) const
{
	if (m_sorte == uneCarte.m_sorte && m_valeur == uneCarte.m_valeur)
	{
		return true;
	}
	return false;
}

bool tp::Carte::estSuivante(const Carte & uneCarte) const
{
	if (m_sorte == uneCarte.m_sorte && m_valeur + 1 == uneCarte.m_valeur)
	{
		return true;
	}
	return false;
}

bool tp::Carte::estPrecedente(const Carte & uneCarte) const
{
	if (m_sorte == uneCarte.m_sorte && m_valeur - 1 == uneCarte.m_valeur)
	{
		return true;
	}
	return false;
}

void tp::Carte::afficherCarte() const
{

	cout << "Sorte : " << m_sorte << endl;
	cout << "Valeur : " << m_valeur << endl;

}
