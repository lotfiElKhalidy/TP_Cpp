#include "valeur.hpp"

Valeur::Valeur() : nombre(.0) {}

Valeur::Valeur(const double & _nombre) : nombre(_nombre) {}

Valeur::~Valeur() {}
         
double Valeur::getNombre() const {
    return nombre;
}

void Valeur::setNombre(const double & nombre) {
    this->nombre = nombre;
}

bool Valeur::operator<(const Valeur &other) const {
    return nombre < other.nombre;
}