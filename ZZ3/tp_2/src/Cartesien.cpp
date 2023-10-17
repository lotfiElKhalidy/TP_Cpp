#include "Cartesien.hpp"
#include "Polaire.hpp"

Cartesien::Cartesien() : x(0), y(0) {}

Cartesien::Cartesien(double _x, double _y) : x(_x), y(_y) {}

Cartesien::Cartesien(const Point & p) {
    p.convertir(*this);
} 

const double & Cartesien::getX() const { 
    return x; 
}

const double & Cartesien::getY() const {
    return y;
}

void Cartesien::setX(const double & _x) {
    x = _x; 
}

void Cartesien::setY(const double & _y) {
    y = _y;
}

std::ostream & Cartesien::afficher(std::ostream & flux) const {
    flux << "(x=" << getX() << ";y=" << getY() << ")";
    return flux;
}

void Cartesien::convertir(Point & c) const {
    if (Cartesien * _c = dynamic_cast<Cartesien*>(&c)) {
        _c->setX(getX());
        _c->setY(getY());
    } else if (Polaire * _p = dynamic_cast<Polaire*>(&c)) {
        _p->setAngle(std::atan2(getY(), getX()) * 180 / M_PI);
        _p->setDistance(std::hypot(getX(), getY()));
    }
}

void Cartesien::convertir(Polaire & p) const {
    p.setAngle(std::atan2(getY(), getX()) * 180 / M_PI);
    p.setDistance(std::hypot(getX(), getY()));
}

void Cartesien::convertir(Cartesien & c) const {
    c.setX(getX());
    c.setY(getY());
}