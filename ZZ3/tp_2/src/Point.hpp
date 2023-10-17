#ifndef POINT_HPP
#define POINT_HPP

#include <ostream>

class Polaire;
class Cartesien;

class Point {
    
    public:
        virtual std::ostream & afficher(std::ostream &) const = 0;

        virtual void convertir(Point &) const = 0;
        virtual void convertir(Polaire &) const = 0;
        virtual void convertir(Cartesien &) const = 0;
         
        //virtual ~Point() = 0; 
};

std::ostream & operator<<(std::ostream &, const Point &);

#endif