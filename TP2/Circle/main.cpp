#include <iostream>
#include <sstream>
#include "Circle.hpp"

int Circle::counter = 0;

int main(int, char**) {
    Circle c1;
    Circle c2{10, 35, 650, 450};
    Circle * c3 = new Circle(55, 102, 100, 65);

    c1.displayCoordinates();
    c2.displayCoordinates();
    c3->displayCoordinates();

    std::cout << c1.toString(c1) << std::endl;
    std::cout << c2.toString(c2) << std::endl;
    std::cout << c3->toString(*c3) << std::endl;

    return 0;
}
