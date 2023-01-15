#include <iostream>
#include "Point.hpp"

int Point::counter = 0;

int main(int, char**) {
    Point p1;
    Point p2{1, 3};
    Point * p3 = new Point(5,10);

    p1.displayCoordinates();
    p1.moveTo(100, 200);
    p1.displayCoordinates();

    p2.displayCoordinates();
    p2.moveWith(40, 25);
    p2.displayCoordinates();

    p3->displayCoordinates();
    p3->moveTo(10, 24);
    p3->displayCoordinates();

    return 0;
}
