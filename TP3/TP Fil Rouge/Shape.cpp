#include <iostream>
#include <sstream>
#include "Shape.hpp"
#include "Point.hpp"

Shape::Shape() {
    this->point = new Point();
    this->w = 0;
    this->h = 0;
}

Shape::Shape(int x_entry, int y_entry, int w_entry, int h_entry) : w(w_entry), h(h_entry) {
    this->point = new Point();
    this->point->setX(x_entry);
    this->point->setY(y_entry);
}

int Shape::getW() {
    return w;
}

void Shape::setW(int w_entry) {
    w = w_entry;
}

int Shape::getH() {
    return h;
}

void Shape::setH(int h_entry) {
    h = h_entry;
}

void Shape::displayCoordinates() {
    this->point->displayCoordinates();
    std::cout << "w = " << getW() << ", h = " << getH() << std::endl;
}

std::string Shape::toString(Shape shape) {
    std::string result = "";
    std::ostringstream oss;

    result.append("SHAPE ");

    oss << shape.point->getX();
    oss << " ";
    oss << shape.point->getY();
    oss << " ";
    oss << shape.getW();
    oss << " ";
    oss << shape.getH();
    
    result.append(oss.str());

    return result;
}