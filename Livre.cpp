#include "Livre.hpp"

// Initialisation du membre statique 
int Livre::nbLivres = 0;

Livre::Livre(const std::string& t, const std::string& a, int an)
    : titre(t), auteur(a), annee(an) {
    ++nbLivres;   // chaque création augmente le compteur
}

void Livre::afficher() const {
    std::cout << "Titre   : " << titre   << "\n"
              << "Auteur  : " << auteur  << "\n"
              << "Annee   : " << annee   << "\n"
              << "\n";
}

void Livre::afficherTotal() {
    std::cout << "Nombre total de livres enregistres : "
              << nbLivres << std::endl;
}