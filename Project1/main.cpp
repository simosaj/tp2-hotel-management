#include <iostream>
#include <vector>
#include "Client.h"
#include "Chambre.h"
#include "Hotel.h"

int main() {
    // 6.a) Création de l'hôtel et des chambres
    Hotel hotel1("OCEAN11", "Le Bellagio", "Las Vegas");

    // 3 Single à 100€
    hotel1.ajouterChambre(Chambre(101, "Single", 100));
    hotel1.ajouterChambre(Chambre(102, "Single", 100));
    hotel1.ajouterChambre(Chambre(103, "Single", 100));

    // 5 Double à 125€
    hotel1.ajouterChambre(Chambre(201, "Double", 125));
    hotel1.ajouterChambre(Chambre(202, "Double", 125));
    hotel1.ajouterChambre(Chambre(203, "Double", 125));
    hotel1.ajouterChambre(Chambre(204, "Double", 125));
    hotel1.ajouterChambre(Chambre(205, "Double", 125));

    // 2 Suite à 210€
    hotel1.ajouterChambre(Chambre(301, "Suite", 210));
    hotel1.ajouterChambre(Chambre(302, "Suite", 210));

    // 6.b) Affichage de l'hôtel et des chambres
    std::cout << hotel1 << std::endl;

    // 6.c) Création d'une liste de clients
    std::vector<Client> clients;
    clients.push_back(Client("c001", "Dupont", "Jean"));
    clients.push_back(Client("c002", "Martin", "Sophie"));
    clients.push_back(Client("c003", "Ginhac", "Dominique"));

    // 6.d) Affichage des clients
    std::cout << "Liste des clients:" << std::endl;
    for (size_t i = 0; i < clients.size(); ++i) {
        std::cout << clients[i] << std::endl;
    }

    return 0;
}
