#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>

class Chambre {
private:
    int numero;
    std::string type;
    double prixParNuit;

public:
    // Constructeur
    Chambre(int num, const std::string& typeChambre, double prix);

    // Getters
    int getNumero() const;
    std::string getType() const;
    double getPrixParNuit() const;

    // Setter
    void setPrixParNuit(double nouveauPrix);

};

#endif
