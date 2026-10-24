#include "Livre.hpp"

int main() {
    Livre l1("1984", "RINA KNET ", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("VENOM", "NIGHT ", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    // Appel statique : PAS besoin d'objet pour l'appeler
    Livre::afficherTotal();

    return 0;
}