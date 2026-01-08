#include "Chambre.h"


// Constructeur
Chambre::Chambre(int numero, const std::string& type, double prixParNuit)
    : numero(numero), type(type), prixParNuit(prixParNuit) {
}

// Getters
int Chambre::getNumero() const {
    return numero;
}

std::string Chambre::getType() const {
    return type;
}

double Chambre::getPrixParNuit() const {
    return prixParNuit;
}

// Setter pour modifier le prix
void Chambre::setPrixParNuit(double nouveauPrix) {
    prixParNuit = nouveauPrix;
}


