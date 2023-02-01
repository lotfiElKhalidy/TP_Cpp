#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <typeinfo>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Group.hpp"

Group * g = new Group;
Circle * c = new Circle;
Rectangle * r = new Rectangle;

void createCircle(Circle ** circle) {
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

    (*circle)->getPoint()->setX(x);
    (*circle)->getPoint()->setY(y);
    (*circle)->setW(w);
    (*circle)->setH(h);

    g->addCircleToList(**circle);
    std::cout << (*circle)->getId() << "\n";
}

void createRectangle(Rectangle ** rectangle) {
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

    (*rectangle)->getPoint()->setX(x);
    (*rectangle)->getPoint()->setY(y);
    (*rectangle)->setW(w);
    (*rectangle)->setH(h);

    g->addRectangleToList(**rectangle);
    std::cout << (*rectangle)->getId() << "\n";
}

void addShapeToGroup(Group ** group) {
    int id_group, id_shape;

    std::cout << "$ add\n";
    std::cout << "id_group = ";
    std::cin >> id_group;
    std::cout << "id_shape = ";
    std::cin >> id_shape;

    if (typeid(g->circles[id_shape-21]) == typeid(Circle)) {
        (*group)->addCircleToList(g->circles[id_shape-21]);
    } else if (typeid(g->rectangles[id_shape-21]) == typeid(Rectangle)) {
        (*group)->addRectangleToList(g->rectangles[id_shape-21]);
    } else {
        std::cout << "ERROR: The id given doesn't exist.\n";
    }
}

void createGroup(Group ** group) {
    std::cout << "$ create group\n";
    std::cout << (*group)->getId() << "\n";
}

std::string containsPoint(Group * group) {
    int id_group, x, y;
    std::string is_found = "false";

    std::cout << "$ contains\n";
    std::cout << "id_group = ";
    std::cin >> id_group;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    while (is_found != "true") {
        int i = 0;

        while (is_found == "false" && i < g->getNumberOfCircles()) {
            std::cout << g->getNumberOfCircles() << "\n";
            if (g->circles[i].getPoint()->getX() == x && g->circles[i].getPoint()->getY() == y) {
                is_found = "true";
            }
            i++;
            std::cout << i << "\n";
        }

        /*if (is_found == "false") {
            int j = 0;

            while (is_found == "false" || j < g->getNumberOfRectangles()) {
                if (g->rectangles[j].getPoint()->getX() == x && g->rectangles[j].getPoint()->getY() == y) {
                    is_found = "true";
                }
                j++;
            }
        }*/
    }

    return is_found;
}

int main(int, char**) {
    int choice = 0;
    Group * group = new Group;
    Circle * circle = new Circle;
    Rectangle * rectangle = new Rectangle;

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
                createCircle(&circle);
                break;
            case 2:
                createRectangle(&rectangle);
                break;
            case 3:
                createGroup(&group);
                break;
            case 4:
                addShapeToGroup(&group);
                break;
            case 5:
                std::cout << group->toString() << "\n";
                break;
            case 6:
                std::cout << containsPoint(group) << "\n";
                break;
            case 7:
                std::cout << "-------- See you soon :) ---------\n";
                exit(0);
            default:
                std::cout << "-------- Invalid number !!! ---------\n";
                break;
        }
    }

    delete r, c, g, group, circle, rectangle;

	return 0;
} 