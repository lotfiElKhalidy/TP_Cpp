#include <iostream>
#include <sstream>
#include "Circle.hpp"

Circle::Circle() {
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;

}

Circle::Circle(int x_entry, int y_entry, int w_entry, int h_entry) {
    x = x_entry;
    y = y_entry;
    w = w_entry;
    h = h_entry;
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;
}

/*Circle::Circle(int cx_entry, int cy_entry, int radius) {
    x = cx_entry;
    y = cy_entry;
    counter++;
    std::cout << "Number of objects created : " << getCounter() << std::endl;
}*/

int Circle::getX() {
    return x;
}

void Circle::setX(int x_entry) {
    x = x_entry;
}

int Circle::getY() {
    return y;
}

void Circle::setY(int y_entry) {
    y = y_entry;
}

int Circle::getW() {
    return w;
}

void Circle::setW(int w_entry) {
    w = w_entry;
}

int Circle::getH() {
    return h;
}

void Circle::setH(int h_entry) {
    h = h_entry;
}

int Circle::getOrder() {
    return this->order;
}

void Circle::setOrder(int order_entry) {
    this->order = order_entry;
}

/*int Circle::getCounter() {
    return counter;
}*/

void Circle::displayCoordinates() {
    std::cout << "x = " << getX() << ", y = " << getY() << "w = " << getW() << ", h = " << getH() << std::endl;
}

std::string Circle::toString(Circle circle) {
    std::string result = "";
    std::ostringstream oss;

    result.append("CIRCLE ");

    oss << circle.getX();
    oss << " ";
    oss << circle.getY();
    oss << " ";
    oss << circle.getW();
    oss << " ";
    oss << circle.getH();
    oss << "\norder : ";
    oss << circle.getOrder();
    
    result.append(oss.str());

    return result;
}
