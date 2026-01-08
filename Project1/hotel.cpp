#include "Hotel.h"
#include <iostream>

// Constructeur
Hotel::Hotel(const std::string& id, const std::string& nom, const std::string& ville)
    : id(id), nom(nom), ville(ville) {
}

// Getters
std::string Hotel::getId() const {
    return id;
}

std::string Hotel::getNom() const {
    return nom;
}

std::string Hotel::getVille() const {
    return ville;
}

std::vector<Chambre> Hotel::getChambres() const {
    return chambres;
}

// Ajouter une chambre
void Hotel::ajouterChambre(const Chambre& c) {
    chambres.push_back(c);
}

bool Hotel::supprimerChambre(int numero) {
    for (size_t i = 0; i < chambres.size(); ++i) {
        if (chambres[i].getNumero() == numero) {
            chambres.erase(chambres.begin() + i); // supprime la chambre à l'indice i
            return true; // suppression réussie
        }
    }
    return false; // chambre non trouvée
}




