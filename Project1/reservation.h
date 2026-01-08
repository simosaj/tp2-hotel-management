#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>

class Reservation {
private:
    std::string dateDebut;
    int nbNuits;
    std::string hotelId;
    int chambreNumero;
    std::string clientId;
    double montantTotal;

public:
    // Constructeur
    Reservation(const std::string& date, int nuits, const std::string& idHotel,
        int numChambre, const std::string& idClient, double prixParNuit);

    // Getters
    std::string getDateDebut() const;
    int getNbNuits() const;
    std::string getHotelId() const;
    int getChambreNumero() const;
    std::string getClientId() const;
    double getMontantTotal() const;

    // Modifier séjour
    void modifierSejour(const std::string& nouvelleDate, int nouveauNbNuits);

    // Calcul montant
    void calculerMontantTotal(double prixParNuit);
};

#endif
