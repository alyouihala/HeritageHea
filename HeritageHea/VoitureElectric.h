
#include "Voiture.h"
class VoitureElectric :
    public Voiture
{
private:
    int niveauBatrie;
public:
    VoitureElectric(string marque, int vitesse, int quantitefuel, int niveauBatrie);// Voiture(marque, vitesse, quantitefuel)
    void afficher() const override;
    ~VoitureElectric();
};
