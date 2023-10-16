#include "Polaire.hpp"
#include "Cartesien.hpp"
#include <iostream>
#include <cmath>

Polaire::Polaire() : a(0), d(0) {}

Polaire::Polaire(double angle, double distance) : a(angle), d(distance) {} 

Polaire::Polaire(const Point & p) {
    p.convertir(*this);
} 

const double & Polaire::getAngle() const {
    return a;
}

const double & Polaire::getDistance() const {
    return d;
}

void Polaire::setAngle(const double & angle) {
    a = angle;
}

void Polaire::setDistance(const double & distance) {
    d = distance;
}

std::ostream & Polaire::afficher(std::ostream & flux) const {
    flux << "(a=" << getAngle() << ";d=" << getDistance() << ")";
    return flux;
}

void Polaire::convertir(Point & c) const {
    if (Cartesien * _c = dynamic_cast<Cartesien*>(&c)) {
        _c->setX(getDistance() * std::cos(getAngle() * M_PI / 180));
        _c->setY(getDistance() * std::sin(getAngle() * M_PI / 180));
    } else if (Polaire * _p = dynamic_cast<Polaire*>(&c)) {
        _p->setAngle(getAngle());
        _p->setDistance(getDistance());
    }
}

void Polaire::convertir(Polaire & p) const {
    p.setAngle(getAngle());
    p.setDistance(getDistance());
}

void Polaire::convertir(Cartesien & c) const {
    c = Cartesien();
    c.setX(getDistance() * std::cos(getAngle() * M_PI / 180));
    c.setY(getDistance() * std::sin(getAngle() * M_PI / 180));
}