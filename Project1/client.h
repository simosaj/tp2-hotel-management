#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string id;
    std::string nom;
    std::string prenom;

public:
    //les constructeur
    Client(const std::string& id,
        const std::string& nom,
        const std::string& prenom);

    //les getters
    std::string getId() const;
    std::string getNom() const;
    std::string getPrenom() const;

    // Méthodes helper
    std::string getNomComplet() const;
    bool operator==(const Client& other) const;
};

#endif
