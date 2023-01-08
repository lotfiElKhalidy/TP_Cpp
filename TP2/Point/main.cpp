#include <iostream>
#include "Point.hpp"

int Point::counter = 0;

int main(int, char**) {
    Point p1;
    Point p2{1, 3};
    Point * p3 = new Point(5,10);

    p1.displayCoordinates();
    p1.moveTo(100, 200);
    p1.displayCoordinates();

    p2.displayCoordinates();
    p2.moveWith(40, 25);
    p2.displayCoordinates();

    p3->displayCoordinates();
    p3->moveTo(10, 24);
    p3->displayCoordinates();

    return 0;
}

// Point.cpp
Point::Point() {
    x = 0;
    y = 0;
    counter++;
    std::cout << "Number of objects created : " << Point::getCounter() << std::endl;
}

Point::Point(int x_entry, int y_entry) {
    x = x_entry;
    y = y_entry;
    counter++;
    std::cout << "Number of objects created : " << Point::getCounter() << std::endl;
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

int Point::getCounter() {
    return counter;
}

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
