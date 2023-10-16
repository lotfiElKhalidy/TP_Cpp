#include <iostream>
#include "Mother.hpp"
#include "Daughter.cpp"

int Mother::counter = 0;

int main(int, char**) {
    Mother m1;
    Mother m2{"Alexia", 43};
    Daughter d1;
    Daughter d2{"Marie", 23};

    m1.displayInfo();
    m2.displayInfo();
    d1.displayInfo();
    d2.displayInfo();

    return 0;
}
