#include <iostream>
#include <fstream>
#include "producteur.hpp"

Producteur::Producteur() : travail(0) {

}

int Producteur::getTravail() {
    return travail;
}

void Producteur::setTravail(int travail) {
    this->travail = travail;
}

void Producteur::produire(int quantite, std::string nom) {

    int travail = getTravail();
    travail++;
    this->setTravail(travail);

    std::ofstream  file(nom.c_str());


    if (!file.fail()) {
        file << quantite << std::endl; 

        for (int i = 0; i < quantite; ++i)
            file << i+1 << std::endl;
        
        file.close();
    }

}
