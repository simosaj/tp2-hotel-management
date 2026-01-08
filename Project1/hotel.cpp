#include "Hotel.h"
#include <iostream>

// Constructeur
Hotel::Hotel(const std::string& identifiant, const std::string& nomHotel, const std::string& villeHotel) {
    id = identifiant;
    nom = nomHotel;
    ville = villeHotel;
}

// Getters
std::string Hotel::getId() const { return id; }
std::string Hotel::getNom() const { return nom; }
std::string Hotel::getVille() const { return ville; }
std::vector<Chambre> Hotel::getChambres() const { return chambres; }

// Ajouter une chambre
void Hotel::ajouterChambre(const Chambre& c) {
    chambres.push_back(c);
}

// Supprimer une chambre par numéro
bool Hotel::supprimerChambre(int numero) {
    for (size_t i = 0; i < chambres.size(); ++i) {
        if (chambres[i].getNumero() == numero) {
            chambres.erase(chambres.begin() + i);
            return true;
        }
    }
    return false;
}


std::ostream& operator<<(std::ostream& os, const Hotel& h) {
    os << "Hotel ID: " << h.getId() << ", Nom: " << h.getNom() << ", Ville: " << h.getVille() << std::endl;
    os << "Liste des chambres:" << std::endl;
    for (size_t i = 0; i < h.getChambres().size(); ++i) {
        os << h.getChambres()[i] << std::endl;
    }
    return os;
}

