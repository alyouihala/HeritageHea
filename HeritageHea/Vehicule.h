#pragma once
#include <iostream>
using namespace std;
class Vehicule
{
public:
	string marque;
	int vitesse;
public:
	Vehicule(string m, int v);
	virtual void afficher() const;
	virtual ~Vehicule(); // C'est obligatoire d'ajouter "virtual" dans le destructeur pour detruire les classes filles au premier lieu
	
};

