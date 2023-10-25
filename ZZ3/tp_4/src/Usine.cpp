#include "Carte.hpp"
#include "Usine.hpp"

int UsineCarte::compteur = 0;

UsineCarte::UsineCarte(const int & numberOfCards) {
    this->numberOfCards = numberOfCards;
} 

std::unique_ptr<Carte> UsineCarte::getCarte() {
    if (getCompteur() < numberOfCards) {
        std::unique_ptr<Carte> carte(new Carte());
        carte->setValeur(getCompteur());
        setCompteur(getCompteur()+1);
        return carte;
    } else {
        return nullptr;
    }
}

int UsineCarte::getCompteur() {
    return compteur;
}

void UsineCarte::setCompteur(int val) {
    compteur = val;
}