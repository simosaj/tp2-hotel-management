#include "Chambre.h"
#include <sstream>
#include <iostream>

// Constructeur
Chambre::Chambre(int num, const std::string& typeChambre, double prix) {
    numero = num;
    type = typeChambre;
    prixParNuit = prix;
}

// Getters
int Chambre::getNumero() const { return numero; }
std::string Chambre::getType() const { return type; }
double Chambre::getPrixParNuit() const { return prixParNuit; }

// Setter
void Chambre::setPrixParNuit(double nouveauPrix) {
    prixParNuit = nouveauPrix;
}


std::ostream& operator<<(std::ostream& os, const Chambre& c) {
    os << "Chambre " << c.getNumero()
        << " (" << c.getType() << "), Prix par nuit: $" << c.getPrixParNuit();
    return os;
}


