#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include "Point.hpp"
#include <iostream>
#include <cmath>

class Polaire;

class Cartesien : public Point {

    private:
        double x;
        double y;
    
    public:
        Cartesien();
        Cartesien(double, double);
        Cartesien(const Point &);

        const double & getX() const;
        const double & getY() const;

        void setX(const double &);
        void setY(const double &);
        
        std::ostream & afficher(std::ostream &) const override;
        
        void convertir(Point &) const override;
        void convertir(Polaire &) const override;
        void convertir(Cartesien &) const override;
};

#endif