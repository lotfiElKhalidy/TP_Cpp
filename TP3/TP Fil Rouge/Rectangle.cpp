#include <iostream>
#include <sstream>
#include "Rectangle.hpp"

Rectangle::Rectangle() {
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    counter++;
    std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;

}

Rectangle::Rectangle(int x_entry, int y_entry, int w_entry, int h_entry) {
    x = x_entry;
    y = y_entry;
    w = w_entry;
    h = h_entry;
    counter++;
    std::cout << "Number of objects created : " << Rectangle::getCounter() << std::endl;
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

int Rectangle::getCounter() {
    return counter;
}

void Rectangle::displayCoordinates() {
    std::cout << "x = " << getX() << ", y = " << getY() << "w = " << getW() << ", h = " << getH() << std::endl;
}

std::string Rectangle::toString(Rectangle rect) {
    std::string result = "";
    std::ostringstream oss;

    result.append("RECTANGLE ");

    oss << rect.getX();
    result.append(oss.str());
    oss.clear();
    oss.seekp(0);
    result.append(" ");    
    
    oss << rect.getY();
    result.append(oss.str());
    oss.clear();
    oss.seekp(0);
    result.append(" ");

    oss << rect.getW();
    result.append(oss.str());
    oss.clear();
    oss.seekp(0);
    result.append(" ");

    oss << rect.getH();
    result.append(oss.str());

    return result;
}