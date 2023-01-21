#include <iostream>
#include <sstream>
#include "Rectangle.hpp"
#include "List.hpp"

Rectangle::Rectangle() {
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    //counter++;
    //std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;
}

Rectangle::Rectangle(int x_entry, int y_entry, int w_entry, int h_entry) {
    x = x_entry;
    y = y_entry;
    w = w_entry;
    h = h_entry;
    //counter++;
    //std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;
}

int Rectangle::getX() {
    return x;
}

void Rectangle::setX(int x_entry) {
    x = x_entry;
}

int Rectangle::getY() {
    return y;
}

void Rectangle::setY(int y_entry) {
    y = y_entry;
}

int Rectangle::getW() {
    return w;
}

void Rectangle::setW(int w_entry) {
    w = w_entry;
}

int Rectangle::getH() {
    return h;
}

void Rectangle::setH(int h_entry) {
    h = h_entry;
}

int Rectangle::getOrder() {
    return this->order;
}

void Rectangle::setOrder(int order_entry) {
    this->order = order_entry;
}

/*int Rectangle::getCounter() {
    return counter;
}*/

void Rectangle::displayCoordinates() {
    std::cout << "x = " << getX() << ", y = " << getY() << "w = " << getW() << ", h = " << getH() << std::endl;
}

std::string Rectangle::toString(Rectangle rectangle) {
    std::string result = "";
    std::ostringstream oss;

    result.append("RECTANGLE ");

    oss << rectangle.getX();
    oss << " ";
    oss << rectangle.getY();
    oss << " ";
    oss << rectangle.getW();
    oss << " ";
    oss << rectangle.getH();
    
    result.append(oss.str());

    return result;
}
