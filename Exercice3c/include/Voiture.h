#ifndef VOITURE_H
#define VOITURE_H

#include<Vehicule.h>
class Voiture : public Vehicule {
private:
    int nombrePortes;
    string typeCarburant;
public:
    Voiture(string imm, string mar, double vit, int portes, string carb)
        : Vehicule(imm, mar, vit) {
        nombrePortes = portes;
        typeCarburant = carb;
    }
    void afficherDetails() override {
        Vehicule::afficherDetails();
        cout << "Voiture: " << nombrePortes << " portes, " << typeCarburant << endl;
    }
};
#endif // VOITURE_H
