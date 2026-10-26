#include <iostream>
#include<CompteBancaire.h>


int main() {
    CompteBancaire c1("001", "Ahmed", 5000);
    CompteBancaire c2("002", "Sara", 3000);

    c1.deposer(1000);
    c2.retirer(500);

    c1.afficher();
    c2.afficher();

    return 0;
};
