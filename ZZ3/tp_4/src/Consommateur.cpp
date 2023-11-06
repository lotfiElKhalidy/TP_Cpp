#include "Ressource.hpp"
#include "Consommateur.hpp"

Consommateur::Consommateur(int besoin, std::shared_ptr<Ressource> ressource) {
    this->besoin = besoin;
    this->ressource = ressource;
}

void Consommateur::puiser() {
    int stock = ressource->getStock();

    if (besoin <= stock)
        ressource->consommer(besoin);
    else {
        if (stock > 0) {
            ressource->consommer(stock);
        }
        ressource = nullptr;
    }
}