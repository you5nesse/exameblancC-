#ifndef VEHICULE_H
#define VEHICULE_H
#include <iostream>
#include<string>
using namespace std;

class Vehicule {
protected:
    string immatriculation;
    string marque;
    double vitesseMax;

public:
    Vehicule(string imm, string mar, double vit) {
        immatriculation = imm;
        marque = mar;
        vitesseMax = vit;
    }
    virtual void afficherDetails() {
        cout <<"immatriculation"<<immatriculation << "   marque " << marque << "    vitesse " << vitesseMax <<endl;
    }
};

#endif // VEHICULE_H
