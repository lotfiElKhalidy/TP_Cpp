#include <iostream>
#include <sstream>
#include "Circle.hpp"
//#include "Shape.hpp"

Circle::Circle() : Shape() {
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;

}

Circle::Circle(int w_entry, int h_entry) : 
    Shape(w_entry, h_entry) {
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;
}

Circle::Circle(int x_entry, int y_entry, int w_entry, int h_entry) : 
    Shape(x_entry, y_entry, w_entry, h_entry) {
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;
}

Circle::Circle(int cx_entry, int cy_entry, int radius) {
    this->getPoint()->setX(2*radius);
    this->getPoint()->setY(2*radius);
    //counter++;
    //std::cout << "Number of objects created : " << getCounter() << std::endl;
}

int Circle::getRadius() {
    return this->getPoint()->getX()/2;
}

void Circle::setRadius(int radius) {
    this->getPoint()->setX(2*radius);
    this->getPoint()->setY(2*radius);
}

void Circle::displayCoordinates() {
    std::cout << "-------- Circle -------- \n";
    point->displayCoordinates();
    std::cout << "w = " << getW() << ", h = " << getH() << std::endl;
}


/*int Circle::getCounter() {
    return counter;
}*/

std::string Circle::toString() {
    std::string result = "";
    std::ostringstream oss;

    result.append("CIRCLE ");

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
