#ifndef __CPP4__GROUP_HPP__
#define __CPP4__GROUP_HPP__

const int NBR_C = 4, NBR_R = 4;

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Shape.hpp"

class Group : public Shape {
    public:
        Circle * circles;
        int NumberOfCircles;   
        Rectangle * rectangles;
        int NumberOfRectangles;

    public:
        Group();
        Group(Circle *, int, Rectangle *, int);
        
        int getNumberOfCircles();
        void setNumberOfCircles(int);
        int getNumberOfRectangles();
        void setNumberOfRectangles(int);
        
        void addCircleToList(Circle);
        void addRectangleToList(Rectangle);
        
        void displayCoordinates();
        std::string toString();
};

#endif
