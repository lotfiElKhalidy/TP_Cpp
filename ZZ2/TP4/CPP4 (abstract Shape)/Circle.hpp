#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include "Shape.hpp"

class Circle : public Shape {
    private:
       static int counter;

    public:
        Circle();
        Circle(int, int);
        Circle(int, int, int);
        Circle(int, int, int, int);

        int getRadius();
        void setRadius(int);

        void displayCoordinates();

        std::string toString();
};

#endif
