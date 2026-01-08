#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "Chambre.h"

class Hotel {
private:
    std::string id;             // Identifiant unique de l'hôtel
    std::string nom;            // Nom de l'hôtel
    std::string ville;          // Ville où se trouve l'hôtel
    std::vector<Chambre> chambres; // Parce que le nombre des chambres est variable

public:
    // Constructeur
    Hotel(const std::string& id, const std::string& nom, const std::string& ville);

    // Getters
    std::string getId() const;
    std::string getNom() const;
    std::string getVille() const;
    std::vector<Chambre> getChambres() const;

    // Méthodes helper
    void ajouterChambre(const Chambre& c);     // Ajouter une chambre
    bool supprimerChambre(int numero);         // Supprimer une chambre par numéro

};

#endif
