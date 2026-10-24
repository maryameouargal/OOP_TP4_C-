#include "Universite.hpp"
#include "Etudiant.hpp"

int main() {
    Universite u("Universite de Casablanca");

    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal();

    return 0;
}