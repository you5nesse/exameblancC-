#include <iostream>
#include <Vehicule.h>
#include<Voiture.h>
#include<Camion.h>
using namespace std;

int main() {
    Vehicule* Vehicules[2];
    Vehicules[0] = new Voiture("A-123", "Dacia", 180, 4, "Diesel");
    Vehicules[1] = new Camion("B-456", "Volvo", 120, 20.5, 3);


    for (int i = 0; i < 2; i++) {
        Vehicules[i]->afficherDetails();
    }

    // Libération mémoire
    for (int i = 0; i < 2; i++) {
        delete Vehicules[i]; }

    return 0;
}
