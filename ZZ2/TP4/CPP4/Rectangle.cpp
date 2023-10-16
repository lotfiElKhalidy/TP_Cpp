#include <iostream>
#include <sstream>
#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape() {
    //counter++;
    //std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;

}

Rectangle::Rectangle(int w_entry, int h_entry) : Shape(w_entry, h_entry) {
    //counter++;
    //std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;
}

Rectangle::Rectangle(int x_entry, int y_entry, int w_entry, int h_entry) :
    Shape(x_entry, y_entry, w_entry, h_entry) {
    //counter++;
    //std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;
}

/*int Rectangle::getCounter() {
    return counter;
}*/

void Rectangle::displayCoordinates() {
    std::cout << "-------- Rectangle -------- \n";
    point->displayCoordinates();
    std::cout << "w = " << getW() << ", h = " << getH() << std::endl;
}

std::string Rectangle::toString() {
    std::string result = "";
    std::ostringstream oss;

    result.append("RECTANGLE ");

    oss << this->point->getX();
    oss << " ";
    oss << this->point->getY();
    oss << " ";
    oss << this->getW();
    oss << " ";
    oss << this->getH();
    oss << "\norder : ";
    oss << id;
    
    result.append(oss.str());

    return result;
}
