#include <iostream>
#include <sstream>
#include "Shape.hpp"

int Shape::nbShapes = 0;

Shape::Shape() : w(0), h(0), color(COLORS::BLUE) {
    this->point = new Point();
    this->id = nbShapes++;
}

Shape::Shape(Point point, COLORS color) : w(0), h(0), color(color) {
    this->point = new Point();
    this->point->setX(point.getX());
    this->point->setY(point.getY());
    this->id = nbShapes++;
}

Shape::Shape(int w_entry, int h_entry) : w(w_entry), h(h_entry) {
    this->point = new Point();
    this->id = nbShapes++;
}

Shape::Shape(int x_entry, int y_entry, int w_entry, int h_entry) : w(w_entry), h(h_entry) {
    this->point = new Point();
    this->point->setX(x_entry);
    this->point->setY(y_entry);
    this->id = nbShapes++;
}

int Shape::getId() {
    return id;
}

int Shape::nextId() {
    return nbShapes;
}


Point * Shape::getPoint() {
    return this->point;
}

void Shape::setPoint(Point * point_entry) {
    this->point = point_entry;
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

int Shape::getOrder() {
    return this->order;
}

void Shape::setOrder(int order_entry) {
    this->order = order_entry;
}

COLORS Shape::getColor() {
    return this->color;
}

void Shape::setColor(COLORS color) {
    this->color = color;
}

void Shape::displayCoordinates() {
    std::cout << "-------- Shape -------- \n";
    point->displayCoordinates();
    std::cout << "w = " << getW() << ", h = " << getH() << std::endl;
}

std::string Shape::toString() {
    std::string result = "";
    std::ostringstream oss;

    result.append("SHAPE ");

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