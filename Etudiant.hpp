#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <iostream>
#include "Universite.hpp"

class Etudiant {
private:
    std::string nom;
    int age;
    Universite* universite;        // association 
    static int nbEtudiants;        

public:
    // Constructeur
    Etudiant(const std::string& n, int a, Universite* u);

    // Affiche les infos de l'étudiant + le nom de son université
    void afficher() const;

    // Affiche le nombre total d'étudiants (méthode statique)
    static void afficherTotal();
};

#endif