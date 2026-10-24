#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
#include <iostream>

class Livre {
private:
    std::string titre;
    std::string auteur;
    int annee;
    static int nbLivres;   

public:
    // Constructeur
    Livre(const std::string& t, const std::string& a, int an);

    // Affiche les infos du livre courant
    void afficher() const;

    // Affiche le nombre total de livres instanciés 
    static void afficherTotal();
};

#endif