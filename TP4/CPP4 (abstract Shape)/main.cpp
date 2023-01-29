#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>  
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Group.hpp"

Group * g = new Group;
Circle * c = new Circle;
Rectangle * r = new Rectangle;

void createCircle(Circle * circle) {
    int x, y, w, h;
    
    std::cout << "$ create circle\n";

    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "w = ";
    std::cin >> w;
    std::cout << "h = ";
    std::cin >> h;
    std::cout << "\n";

    circle->getPoint()->setX(x);
    circle->getPoint()->setY(y);
    circle->setW(w);
    circle->setH(h);

    g->addCircleToList(*circle);
    std::cout << circle->getId() << "\n";
}

void createRectangle(Rectangle * rectangle) {
    int x, y, w, h;
    
    std::cout << "$ create rectangle\n";

    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "w = ";
    std::cin >> w;
    std::cout << "h = ";
    std::cin >> h;
    std::cout << "\n";

    rectangle->getPoint()->setX(x);
    rectangle->getPoint()->setY(y);
    rectangle->setW(w);
    rectangle->setH(h);

    g->addRectangleToList(*rectangle);
    std::cout << rectangle->getId() << "\n";
}

void createGroup(Group * group) {
    std::cout << "$ create group\n";
    std::cout << group->getId() << "\n";
}

int main(int, char**) {
    int choice = 0;
    Group * group = new Group;

    std::cout << "--------------- MENU --------------\n\n";
    std::cout << "1. create circle x y w h\n";
    std::cout << "2. create rectangle x y w h\n";
    std::cout << "3. create group (no arguments)\n";
    std::cout << "4. add id_group id_shape\n";
    std::cout << "5. display (no arguments)\n";
    std::cout << "6. contains id_group x y\n";
    std::cout << "7. exit\n\n";


    while (choice != 7) {
        std::cout << "-------- Make your choice ---------\n";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                createCircle(c);
                break;
            case 2:
                createRectangle(r);
                break;
            case 3:
                createGroup(group);
                break;
            case 4:
                std::cout << g->toString() << "\n";
                break;
            case 7:
                std::cout << "-------- See you soon :) ---------\n";
                exit(0);
            default:
                std::cout << "-------- Invalid number !!! ---------\n";
                break;
        }
    }

    delete r, c, g, group;

	return 0;
} 