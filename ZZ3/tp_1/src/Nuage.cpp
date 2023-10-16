#include "Nuage.hpp"

int Nuage::size() const {
    return points.size();
}

void Nuage::ajouter(Point & p) {
    points.push_back(&p);
}

Cartesien barycentre(Nuage n) {
    Cartesien c;
    double total_x = .0, total_y = .0;

    for (Point *p : n) {
        p->convertir(c);
        total_x += c.getX();
        total_y += c.getY();
    }

    return Cartesien(total_x / n.size(), total_y / n.size());
} 