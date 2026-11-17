#pragma once
#include "Vehicule.h"
class Voiture :
    public Vehicule
{
private:
	int qantitefuel;
public:
	Voiture(string marque,int vitesse,int quantitefuel);
	void afficher() const override;
    ~Voiture();
};

