#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include "Point.hpp"

class Cartesien;

class Polaire : public Point {

    private:
        double a;
        double d;
    
    public:
        Polaire();
        Polaire(double, double);
        Polaire(const Point &);

        const double & getAngle() const;
        const double & getDistance() const;

        void setAngle(const double &);
        void setDistance(const double &);

        std::ostream & afficher(std::ostream &) const override;
        
        void convertir(Point &) const override;
        void convertir(Polaire &) const override;
        void convertir(Cartesien &) const override;
};

#endif