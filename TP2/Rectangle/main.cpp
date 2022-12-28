#include <iostream>
#include "Rectangle.hpp"

int main(int, char**) {
    Rectangle r1;
    Rectangle r2{10, 35, 650, 450};
    Rectangle * r3 = new Rectangle(55, 102, 270, 780);

    r1.displayCoordinates();
    r2.displayCoordinates();
    r3->displayCoordinates();

  return 0;
}
