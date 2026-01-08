#include "Client.h"
#include <iostream>

// Constructeur
Client::Client(const std::string& identifiant, const std::string& nomClient, const std::string& prenomClient) {
    id = identifiant;
    nom = nomClient;
    prenom = prenomClient;
}

// Getters
std::string Client::getId() const { return id; }
std::string Client::getNom() const { return nom; }
std::string Client::getPrenom() const { return prenom; }


std::ostream& operator<<(std::ostream& os, const Client& c) {
    os << "Client ID: " << c.getId()
        << ", Nom: " << c.getNomComplet();
    return os;
}

std::string Client::getNomComplet() const {
    return prenom + " " + nom;
}



