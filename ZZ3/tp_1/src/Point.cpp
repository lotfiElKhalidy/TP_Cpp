#include "Point.hpp"

//Point::~Point() {}  

std::ostream & operator<<(std::ostream & flux, const Point & p) {
    p.afficher(flux);
    return flux;
}