#include "Universite.hpp"

Universite::Universite(const std::string& n) : nom(n) {}

void Universite::afficherNom() const {
    std::cout << "Universite : " << nom << std::endl;
}

std::string Universite::getNom() const {
    return nom;
}