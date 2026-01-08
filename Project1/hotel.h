#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "Chambre.h"

class Hotel {
private:
    std::string id;
    std::string nom;
    std::string ville;
    std::vector<Chambre> chambres;

public:
    // Constructeur
    Hotel(const std::string& identifiant, const std::string& nomHotel, const std::string& villeHotel);

    // Getters
    std::string getId() const;
    std::string getNom() const;
    std::string getVille() const;
    std::vector<Chambre> getChambres() const;

    // Helper
    void ajouterChambre(const Chambre& c);
    bool supprimerChambre(int numero); 
    
};

#endif
