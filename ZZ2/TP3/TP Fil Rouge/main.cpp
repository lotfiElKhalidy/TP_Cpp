#include <iostream>
#include "List.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Shape.hpp"

int main(int, char**) {
    Circle * circles = new Circle[NBR_C] {
        {20, 85, 750, 450},
        {10, 65, 50, 150},
        {10, 35, 650, 450},
        {160, 354, 60, 750}
    };

    Rectangle * rectangles = new Rectangle[NBR_R] {
        {200, 15, 740, 350},
        {100, 165, 550, 190},
        {301, 35, 540, 350},
        {60, 54, 620, 710}
    };

    Shape * shapes = new Shape[NBR_S] {
        {200, 85, 750, 450},
        {100, 65, 580, 150},
        {105, 345, 650, 450},
        {160, 354, 680, 750}
    };

    List l1{circles, NBR_C, rectangles, NBR_R, shapes, NBR_S};

    std::cout << l1.toString() << std::endl;

    return 0;
}
