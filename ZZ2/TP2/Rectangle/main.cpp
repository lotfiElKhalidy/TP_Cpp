#include <iostream>
#include <sstream>
#include "Rectangle.hpp"

int Rectangle::counter = 0;

int main(int, char**) {
    Rectangle r1;
    Rectangle r2{10, 35, 650, 450};
    Rectangle * r3 = new Rectangle(55, 102, 270, 780);

    r1.displayCoordinates();
    r2.displayCoordinates();
    r3->displayCoordinates();

    std::cout << r1.toString(r1) << std::endl;
    std::cout << r2.toString(r2) << std::endl;
    std::cout << r3->toString(*r3) << std::endl;

    return 0;
}
