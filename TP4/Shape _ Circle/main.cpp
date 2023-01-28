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
   
    // Troncature : Copy the content of the mother class -> Circle becomes Shape 
    afficher1(c);

    // We always have to use pointers and references when using heritage 
    afficher2(c);
    afficher3(&c);
   
    return 0;
}