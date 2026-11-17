// HeritageHea.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "VoitureElectric.h"

int main()
{
    Vehicule* V1 = new VoitureElectric("Opel", 140, 5, 70);
    V1->afficher();
  
    Voiture* V2 = new VoitureElectric("Renault", 150, 4, 90);
    V2->afficher();
    
    Vehicule* V3 = new Vehicule("Toyota", 180);
    V3->afficher();


    delete V1;
    V1 = nullptr;
    delete V2;
    V2 = nullptr;
    delete V3;
    V3 = nullptr;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
