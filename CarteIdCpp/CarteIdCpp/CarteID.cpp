#include "CarteID.h"

mCarteID::mCarteID()
{
	
}

mCarteID::~mCarteID()
{
}



string mCarteID::getnom()
{
	return string(nom);
}

string mCarteID::getprenom()
{
	return string(prenom);
}

string mCarteID::getadresse()
{
	return string(adresse);
}

string mCarteID::getCP()
{
	return string(CP);
}

string mCarteID::getville()
{
	return string(ville);
}

string mCarteID::getprofession()
{
	return string(profession);
}

string mCarteID::getdatedeN()
{
	return string(datedeN);
}

void mCarteID::setnom(string nom)
{
	this->nom = nom;
}

void mCarteID::setprenom(string prenom)
{
	this->prenom = prenom;
}

void mCarteID::setadresse(string adresse)
{
	this->adresse = adresse;
}

void mCarteID::setCP(string CP)
{
	this->CP = CP;
}

void mCarteID::setville(string ville)
{
	this->ville = ville;
}

void mCarteID::setprofession(string profession)
{
	this->profession = profession;
}

void mCarteID::setdatedeN(string datedeN)
{
	this->datedeN = datedeN;
}

//Antoine Briottet