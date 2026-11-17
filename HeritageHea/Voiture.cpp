#include "Voiture.h"

Voiture::Voiture(string marque,int vitesse,int quantitefuel) :
	Vehicule(marque, vitesse)
{
	this->qantitefuel = quantitefuel;
}

void Voiture::afficher() const 
{
	Vehicule::afficher();
	cout << "Quantite de fuel est : " << qantitefuel << endl;
}

Voiture::~Voiture()
{
	cout << "Destructeur de Voiture" << endl;
}
