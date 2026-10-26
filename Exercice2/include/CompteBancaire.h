#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    string numero;
    string titulaire;
    double solde;

public:
    // 2. Constructeur paramétré
    CompteBancaire(string num, string tit, double s) {
        numero = num;
        titulaire = tit;
        solde = s;
    }

    // Getters
    string getNumero() { return numero; }
    double getSolde() { return solde; }

    // 3. Méthodes
    void deposer(double montant) {
        if (montant > 0)
            solde += montant;

    }

    void retirer(double montant) {
        if (montant > 0 && solde >= montant)
            solde -= montant;

    }

    void afficher() {
        cout << "Compte N: " << numero << " | Titulaire: " << titulaire
             << " Solde: " << solde << endl;
    }
};

#endif // COMPTEBANCAIRE_H
