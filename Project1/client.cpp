#include "Client.h"

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


