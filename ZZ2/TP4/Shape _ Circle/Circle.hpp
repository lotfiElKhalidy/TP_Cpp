#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
    private:
       static int counter;

    public:
        Circle();
        Circle(int, int, int, int);

        void displayCoordinates();

        //static int getCounter();

        //std::string toString(Circle);
};

#endif
