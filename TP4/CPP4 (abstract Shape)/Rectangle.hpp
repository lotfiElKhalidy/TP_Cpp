#ifndef __CPP4__RECTANGLE_HPP__
#define __CPP4__RECTANGLE_HPP__

#include "Shape.hpp"

class Rectangle : public Shape {
    private:
        static int counter;

    public:
        Rectangle();
        Rectangle(int, int);
        Rectangle(int, int, int, int);

        //static int getCounter();

        void displayCoordinates();
        std::string toString();
};

#endif