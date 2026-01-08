#include "Client.h"

Client::Client(const std::string& id,
    const std::string& nom,
    const std::string& prenom)
    : id(id), nom(nom), prenom(prenom) {
}

std::string Client::getId() const {
    return id;
}

std::string Client::getNom() const {
    return nom;
}

std::string Client::getPrenom() const {
    return prenom;
}

std::string Client::getNomComplet() const {
    return prenom + " " + nom;
}

bool Client::operator==(const Client& other) const {
    return id == other.id;
}
