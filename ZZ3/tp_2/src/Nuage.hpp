#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include "Cartesien.hpp"
#include "Polaire.hpp"

template <typename T>
class Nuage {

    private:
        std::vector<T> points;
    
    public:
        Nuage() {};

        int size() const;
        void ajouter(const T &);

        using const_iterator = typename std::vector<T>::const_iterator;
        const_iterator begin() const { return points.begin(); }
        const_iterator end() const { return points.end(); }
};

// struct BarycentreCartesien {
//     Cartesien operator()(Nuage n) const { 
//         return barycentre(n);
//     }
// };

// struct BarycentrePolaire {
//     Polaire operator()(Nuage n) const {
//         Polaire p;
//         Cartesien c = barycentre(n);
//         c.convertir(p);
//         return p;
//     }
// };

template <typename T>
int Nuage<T>::size() const {
    return points.size();
}

template <typename T>
void Nuage<T>::ajouter(const T & p) {
    points.push_back(p);
}

template <typename T>
Cartesien barycentre_v1(const Nuage<T> & n) {
    double total_x = .0, total_y = .0;
    
    if (n.size() == 0) {
        return Cartesien(total_x, total_y);
    } else {
        Cartesien c;

        for (const T &p : n) {
            p.convertir(c);
            total_x += c.getX();
            total_y += c.getY();
        }

        return Cartesien(total_x / n.size(), total_y / n.size());
    }
}

template <typename T>
Polaire barycentre_v2(const Nuage<T> & n) {
    Polaire p;
    Cartesien c = barycentre_v1(n);
    c.convertir(p);

    return p;
}

#endif