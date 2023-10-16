#include <iostream>
#include <sstream>
#include "Vecteur.hpp"

int main(int, char**) {
    Vecteur v1;
    Vecteur v2(20);

    for (int i=0; i<4; i++) {
        v2.push_back(3.1452574);
    }
    v2.displayInfo();

    for (int i=0; i<15; i++) {
        v1.push_back(3.1);
    }

    v1.displayInfo();

    return 0;
}
