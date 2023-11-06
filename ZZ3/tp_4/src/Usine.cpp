#include "Carte.hpp"
#include "Usine.hpp"

UsineCarte::UsineCarte(const int & numberOfCards) : UsineCarte() {
    Carte::setCompteur(0);
    this->numberOfCards = numberOfCards;
}

std::unique_ptr<Carte> UsineCarte::getCarte() {
    if (Carte::getCompteur() < numberOfCards) {
        std::unique_ptr<Carte> carte(new Carte());
        carte->setValeur(Carte::getCompteur());
        Carte::setCompteur(Carte::getCompteur()+1);
        return carte;
    } else {
        return nullptr;
    }
}

// int UsineCarte::getCompteur() {
//     return compteur;
// }

// void UsineCarte::setCompteur(int val) {
//     compteur = val;
// }

UsineCarte::~UsineCarte() {
    Carte::setCompteur(0);
}