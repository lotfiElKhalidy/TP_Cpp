#include <iostream>
#include <sstream>
#include "Circle.hpp"

void afficher1(Shape s) {
   s.displayCoordinates();
}

void afficher2(Shape & s) {
    s.displayCoordinates();
}

void afficher3(Shape * s) {
    s->displayCoordinates();
}

int main(int, char**) {
   Circle c;
   
   afficher1(c);
   afficher2(c);
   afficher3(&c);
   
   return 0;
}