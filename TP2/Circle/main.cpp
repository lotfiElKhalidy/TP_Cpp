#include <iostream>
#include "Circle.hpp"

int main(int, char**) {
    Circle c1;
    Circle c2{10, 35, 650, 450};
    Circle * c3 = new Rectangle(55, 102, 100);

    c1.displayCoordinates();
    c2.displayCoordinates();
    c3->displayCoordinates();

    return 0;
}
