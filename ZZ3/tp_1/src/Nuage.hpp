#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include "Cartesien.hpp"
#include "Polaire.hpp"

class Point;

class Nuage {

    private:
        std::vector<Point*> points;
    
    public:
        Nuage() = default;

        int size() const;
        void ajouter(Point &);

        using const_iterator = std::vector<Point*>::const_iterator;
        const_iterator begin() { return points.begin(); }
        const_iterator end() { return points.end(); }
};

Cartesien barycentre(Nuage n);

struct BarycentreCartesien {
    Cartesien operator()(Nuage n) const { 
        return barycentre(n);
    }
};

struct BarycentrePolaire {
    Polaire operator()(Nuage n) const {
        Polaire p;
        Cartesien c = barycentre(n);
        c.convertir(p);
        return p;
    }
};

#endif