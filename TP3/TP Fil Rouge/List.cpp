#include <iostream>
#include "List.hpp"

List::List() {
    this->NumberOfCircles = 0;
    this->NumberOfRectangles = 0;
}

/*int List::getCounter() {
    return counter;
}*/

int List::initializeList() {
    List * list = new List();

    return list;
}