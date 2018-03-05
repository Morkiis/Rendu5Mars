#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<fstream>

#include <string>
#include "CarteID.h"

int menu();
void ajouterCarte(mCarteID carteID[]);
void afficher(mCarteID carteID[]);



int main() {

	mCarteID carteID[100];
	bool tourne = true;

	while (tourne) {
		
		switch (menu())
		{
		case 1:
			afficher(carteID);
		
		break;

		case 2:
			ajouterCarte(carteID);
			break;

		case 0:
			tourne = false;

			break;
		}
	}

	return 0;
}


int menu() {
	int choix=0;

	system("cls");
	std::cout << "Menu" << std::endl;
	std::cout << "1 Afficher" << std::endl;
	std::cout << "2 Ajouter" << std::endl;
	std::cout << "0 Quitter" << std::endl;
	std::cin >> choix;
	return choix;
}

void ajouterCarte(mCarteID carteID[])
{
	string const carte("C:/Users/briot/Desktop/CarteIdCpp/Fichier/carte.txt");//Le chemin relatif ne fonctionne pas "Fichier/carte.txt"
	ofstream monFlux(carte.c_str());
	string emplacement;
	system("cls");

	cin.ignore();
	
	

	std::cout << "\nEntrez votre nom : ";
	std::getline(std::cin, emplacement);
	if (monFlux)  
	{
		monFlux << emplacement << endl;
	}
	
	
	
	std::cout << "\nEntrez votre prenom : ";
	std::getline(std::cin, emplacement);
	if (monFlux)  
	{
		monFlux << emplacement << endl;
	}
	
	
	std::cout << "\nEntrez votre adresse : ";
	std::getline(std::cin, emplacement);
	if (monFlux)  
	{
		monFlux << emplacement << endl;
	}


	std::cout << "\nEntrez votre CP : ";
	std::getline(std::cin, emplacement);
	if (monFlux)  
	{
		monFlux << emplacement << endl;
	}


	std::cout << "\nEntrez votre ville : ";
	std::getline(std::cin, emplacement);
	if (monFlux)  
	{
		monFlux << emplacement << endl;
	}
	
	std::cout << "\nEntrez votre profession : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}

	std::cout << "\nEntrez votre Date de naissance : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}

	std::cout << "Saisie reussie" << std::endl;
	system("pause");
}


void afficher(mCarteID carteID[])
{

	system("cls");

	string const carte("C:/Users/briot/Desktop/CarteIdCpp/Fichier/carte.txt"); //Le chemin relatif ne fonctionne pas "Fichier/carte.txt"
	ifstream monFlux(carte.c_str());

	if (monFlux)
	{
		string ligne; 

		while (getline(monFlux, ligne))
		{
			cout << ligne << endl;
		}
		system("pause");
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}

}

//Antoine Briottet