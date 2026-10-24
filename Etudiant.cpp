#include "Etudiant.hpp"

// Définition du membre statique (une seule fois, hors de la classe)
int Etudiant::nbEtudiants = 0;

Etudiant::Etudiant(const std::string& n, int a, Universite* u)
    : nom(n), age(a), universite(u) {
    ++nbEtudiants;   
}

void Etudiant::afficher() const {
    std::cout << "Nom      : " << nom << "\n"
              << "Age      : " << age << "\n";

    // Vérification 
    if (universite != nullptr) {
        std::cout << "Universite : " << universite->getNom() << "\n";
    } else {
        std::cout << "Universite : (aucune)\n";
    }
}

void Etudiant::afficherTotal() {
    std::cout << "Nombre total d'etudiants inscrits : "
              << nbEtudiants << std::endl;
}