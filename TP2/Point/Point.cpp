#include <iostream>
#include "Point.hpp"

Point::Point() {
    x = 0;
    y = 0;
    //counter++;
    //std::cout << "Number of objects created : " << getCounter() << std::endl;

}

Point::Point(int x_entry, int y_entry) {
    x = x_entry;
    y = y_entry;
    //counter++;
    //std::cout << "Number of objects created : " << getCounter() << std::endl;
}

int Point::getX() {
    return x;
}

void Point::setX(int x_entry) {
    x = x_entry;
}

int Point::getY() {
    return y;
}

void Point::setY(int y_entry) {
    y = y_entry;
}

/*
int Point::getCounter() {
    return counter;
}
*/

void Point::moveWith(int dx, int dy) {
    setX(getX() + dx);
    setY(getY() + dy);
}

void Point::moveTo(int dest_x, int dest_y) {
    setX(dest_x);
    setY(dest_y);
}

void Point::displayCoordinates() {
    std::cout << "x = " << getX() << ", y = " << getY() << std::endl;
}
