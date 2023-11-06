#include "Carte.hpp"

int Carte::compteur = 0;

unsigned int Carte::getValeur() const {
    return valeur;
}

void Carte::setValeur(unsigned int valeur) {
    this->valeur = valeur;
}

int Carte::getCompteur() {
    return compteur;
}

void Carte::setCompteur(int val) {
    compteur = val;
}