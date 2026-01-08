#include "Reservation.h"

// Constructeur
Reservation::Reservation(const std::string& date, int nuits, const std::string& idHotel,
    int numChambre, const std::string& idClient, double prixParNuit) {
    dateDebut = date;
    nbNuits = nuits;
    hotelId = idHotel;
    chambreNumero = numChambre;
    clientId = idClient;
    calculerMontantTotal(prixParNuit);
}

// Getters
std::string Reservation::getDateDebut() const { return dateDebut; }
int Reservation::getNbNuits() const { return nbNuits; }
std::string Reservation::getHotelId() const { return hotelId; }
int Reservation::getChambreNumero() const { return chambreNumero; }
std::string Reservation::getClientId() const { return clientId; }
double Reservation::getMontantTotal() const { return montantTotal; }

// Modifier séjour
void Reservation::modifierSejour(const std::string& nouvelleDate, int nouveauNbNuits) {
    dateDebut = nouvelleDate;
    nbNuits = nouveauNbNuits;
}

// Calcul montant total
void Reservation::calculerMontantTotal(double prixParNuit) {
    montantTotal = nbNuits * prixParNuit;
}
