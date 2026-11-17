#include "VoitureElectric.h"

VoitureElectric::VoitureElectric(string marque, int vitesse, int quantitefuel, int niveauBatrie):
	Voiture(marque,vitesse,quantitefuel)
{
	this->niveauBatrie = niveauBatrie;
}

void VoitureElectric::afficher() const
{
	Voiture::afficher();
	cout << "Niveau de batrie est : " << niveauBatrie << "%" << endl;
	
}

VoitureElectric::~VoitureElectric()
{
	cout << "Destructeur de Voiture Electric" << endl;
}
