#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string id;
    std::string nom;
    std::string prenom;

public:
    // Constructeur
    Client(const std::string& identifiant, const std::string& nomClient, const std::string& prenomClient);

    // Getters
    std::string getId() const;
    std::string getNom() const;
    std::string getPrenom() const;

    // Helper
    std::string getNomComplet() const;
};

#endif
