#include <iostream>
#include <sstream>
#include "Circle.hpp"
//#include "Shape.hpp"

Circle::Circle() : Shape() {
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;

}

Circle::Circle(int x_entry, int y_entry, int w_entry, int h_entry) : 
    Shape(x_entry, y_entry, w_entry, h_entry) {
    //counter++;
    //std::cout << "Number of objects created : " << Circle::getCounter() << std::endl;
}

void Circle::displayCoordinates() {
    std::cout << "-------- Circle -------- \n";
    //this->point->displayCoordinates();
    std::cout << "w = " << getW() << ", h = " << getH() << std::endl;
}

/*Circle::Circle(int cx_entry, int cy_entry, int radius) {
    x = cx_entry;
    y = cy_entry;
    counter++;
    std::cout << "Number of objects created : " << getCounter() << std::endl;
}

int Circle::getCounter() {
    return counter;
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
*/