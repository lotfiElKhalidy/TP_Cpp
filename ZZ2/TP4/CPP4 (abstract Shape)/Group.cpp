#include <iostream>
#include <sstream>
#include "Group.hpp"

Group::Group() {
    this->circles = new Circle[NBR_C] ;
    this->NumberOfCircles = 0;
    this->rectangles = new Rectangle[NBR_R] ;
    this->NumberOfRectangles = 0;
}

Group::Group(Circle * circles, int lenCircles, Rectangle * rectangles, int lenRectangles) { 
    this->circles = new Circle[lenCircles];
    this->NumberOfCircles = 0;
    this->rectangles = new Rectangle[lenRectangles];
    this->NumberOfRectangles = 0;

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
}

int Group::getNumberOfCircles() {
    return this->NumberOfCircles;
}

void Group::setNumberOfCircles(int nbr_c) {
    this->NumberOfCircles = nbr_c;
}

int Group::getNumberOfRectangles() {
    return this->NumberOfRectangles;
}

void Group::setNumberOfRectangles(int nbr_r) {
    this->NumberOfRectangles = nbr_r;
}

void Group::addCircleToList(Circle newCircle) {
    newCircle.order = this->getNumberOfCircles();
    this->circles[this->getNumberOfCircles()] = newCircle;
    this->NumberOfCircles++;
}

void Group::addRectangleToList(Rectangle newRectangle) {
    newRectangle.order = this->getNumberOfRectangles();
    this->rectangles[this->getNumberOfRectangles()] = newRectangle;
    this->NumberOfRectangles++;
}

void Group::displayCoordinates() {
    std::cout << "-------- Group -------- \n";
}

std::string Group::toString() {
    std::string result = "";
    std::ostringstream oss;

    oss << "LIST OF CIRCLES\n--------------------\n";

    for (int i=0; i<this->NumberOfCircles; i++) {
        oss << this->circles[i].toString();
        oss << "\n";
    }

    oss << "\nLIST OF RECTANGLES\n--------------------\n";

    for (int i=0; i<this->NumberOfRectangles; i++) {
        oss << this->rectangles[i].toString();
        oss << "\n";
    }
    
    result.append(oss.str());

    return result;
}
