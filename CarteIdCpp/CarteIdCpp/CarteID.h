#pragma once
#include <iostream>
#include <string>

using  namespace std;

class mCarteID
{
	
	string nom;
	string prenom;
	string adresse;
	string CP;
	string ville;
	string profession;
	string datedeN;

	//Public

public:
	mCarteID();
	~mCarteID();

	
	string getnom();
	string getprenom();
	string getadresse();
	string getCP();
	string getville();
	string getprofession();
	string getdatedeN();

	
	void setnom(string nom);
	void setprenom(string prenom);
	void setadresse(string adresse);
	void setCP(string CP);
	void setville(string ville);
	void setprofession(string profession);
	void setdatedeN(string datedeN);
};

//Antoine Briottet