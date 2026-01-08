#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>

class Chambre {
private:
    int numero;           // Numéro de la chambre
    std::string type;     // Type de chambre : Single, Double, Suite...
    double prixParNuit;   // Prix par nuit en $

public:
    // Constructeur
    Chambre(int numero, const std::string& type, double prixParNuit);

    // Getters
    int getNumero() const;
    std::string getType() const;
    double getPrixParNuit() const;

    // Setter / Helper
    void setPrixParNuit(double nouveauPrix);

    
};

#endif

