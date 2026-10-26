#ifndef CAMION_H
#define CAMION_H
#include<Vehicule.h>
class Camion : public Vehicule {
private:
    double capaciteCharge;
    int nombreEssieux;
public:
    Camion(string imm, string mar, double vit, double charge, int ess)
        : Vehicule(imm, mar, vit) {
        capaciteCharge = charge;
        nombreEssieux = ess;
    }
    void afficherDetails() override {
        Vehicule::afficherDetails();
        cout << "Camion: " << capaciteCharge << "T, " << nombreEssieux << " essieux" << endl;
    }
};

#endif // CAMION_H
