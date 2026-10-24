#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include <string>
#include <iostream>

class Universite {
private:
    std::string nom;

public:
    // Constructeur
    explicit Universite(const std::string& n);

    // Affiche le nom de l'université
    void afficherNom() const;

    // Getter 
    std::string getNom() const;
};

#endif