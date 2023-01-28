#include <iostream>
#include <sstream>
#include "List.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Shape.hpp"

List::List() {
    this->circles = new Circle[NBR_C] ;
    this->NumberOfCircles = 0;
    this->rectangles = new Rectangle[NBR_R] ;
    this->NumberOfRectangles = 0;
    this->shapes = new Shape[NBR_S] ;
    this->NumberOfShapes = 0;
}

List::List(Circle * circles, int lenCircles, Rectangle * rectangles, int lenRectangles, Shape * shapes, int lenShapes) { 
    this->circles = new Circle[lenCircles];
    this->NumberOfCircles = 0;
    this->rectangles = new Rectangle[lenRectangles];
    this->NumberOfRectangles = 0;
    this->shapes = new Shape[lenShapes];
    this->NumberOfShapes = 0;

    int i = 0;
    while (circles && i<lenCircles) {
        this->addCircleToList(circles[i]);
        i++;
    }

    i = 0;
    while (rectangles && i<lenRectangles) {
        this->addRectangleToList(rectangles[i]);
        i++;
    }

    i = 0;
    while (shapes && i<lenShapes) {
        this->addShapeToList(shapes[i]);
        i++;
    }
}

int List::getNumberOfCircles() {
    return this->NumberOfCircles;
}

void List::setNumberOfCircles(int nbr_c) {
    this->NumberOfCircles = nbr_c;
}

int List::getNumberOfRectangles() {
    return this->NumberOfRectangles;
}

void List::setNumberOfRectangles(int nbr_r) {
    this->NumberOfRectangles = nbr_r;
}

int List::getNumberOfShapes() {
    return this->NumberOfShapes;
}

void List::setNumberOfShapes(int nbr_s) {
    this->NumberOfShapes = nbr_s;
}

void List::addCircleToList(Circle newCircle) {
    newCircle.order = this->getNumberOfCircles();
    this->circles[this->getNumberOfCircles()] = newCircle;
    this->NumberOfCircles++;
}

void List::addRectangleToList(Rectangle newRectangle) {
    newRectangle.order = this->getNumberOfRectangles();
    this->rectangles[this->getNumberOfRectangles()] = newRectangle;
    this->NumberOfRectangles++;
}

void List::addShapeToList(Shape newShape) {
    newShape.order = this->getNumberOfShapes();
    this->shapes[this->getNumberOfShapes()] = newShape;
    this->NumberOfShapes++;
}

void List::sortLists() {

}

std::string List::toString() {
    std::string result = "";
    std::ostringstream oss;

    oss << "LIST OF CIRCLES\n--------------------\n";

    for (int i=0; i<this->NumberOfCircles; i++) {
        oss << this->circles[i].toString(circles[i]);
        oss << "\n";
    }

    oss << "\nLIST OF RECTANGLES\n--------------------\n";

    for (int i=0; i<this->NumberOfRectangles; i++) {
        oss << this->rectangles[i].toString(rectangles[i]);
        oss << "\n";
    }

    oss << "\nLIST OF SHAPES\n--------------------\n";

    for (int i=0; i<this->NumberOfShapes; i++) {
        oss << this->shapes[i].toString(shapes[i]);
        oss << "\n";
    }
    
    result.append(oss.str());

    return result;
}

/*int List::getCounter() {
    return counter;
}

void List::initializeList() {
    this.circles = 

    return list;
}*/