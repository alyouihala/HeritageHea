#include "Vehicule.h"

Vehicule::Vehicule(string marque, int vitesse)
{
	this->marque = marque;
	this->vitesse = vitesse;
}

void Vehicule::afficher() const
{
	cout << "---------------------------------" << endl;
	cout << "Marque: " << marque << endl;
	cout << "Vitesse: " << vitesse << endl;
}

Vehicule::~Vehicule()
{
	cout << "Destructeur de Vehicule" << endl;
}
