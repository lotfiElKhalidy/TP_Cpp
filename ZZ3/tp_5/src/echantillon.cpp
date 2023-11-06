#include "valeur.hpp"
#include "echantillon.hpp"

Echantillon::Echantillon() {}

Echantillon::~Echantillon() {}

int Echantillon::getTaille() const {
    return valeurs.size();
}

void Echantillon::ajouter(const int & valeur) {
    valeurs.push_back(valeur);
}

Valeur Echantillon::getMinimum() const {
    if (valeurs.empty()) {
        throw std::domain_error("Echantillon vide");
    }
    return *std::min_element(valeurs.begin(), valeurs.end());
}

Valeur Echantillon::getMaximum() const {
    if (valeurs.empty()) {
        throw std::domain_error("Echantillon vide");
    }
    return *std::max_element(valeurs.begin(), valeurs.end());
}

Valeur & Echantillon::getValeur(const int & indice) {
    int size = valeurs.size();

    if (indice >= size) {
        throw std::out_of_range("Indice hors limite");
    }

    return valeurs[indice];
}