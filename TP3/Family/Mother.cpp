#include <iostream>
#include "Mother.hpp"

Mother::Mother() {
    this->name = "Jane Doe";
    this->age  = -1;
    counter++;
    std::cout << "Number of objects created : " << Mother::getCounter() << std::endl;
}

Mother::Mother(std::string name_entry, int age_entry) {
    this->name = name_entry;
    this->age = age_entry;
    counter++;
    std::cout << "Number of objects created : " << Mother::getCounter() << std::endl;
}

Mother::~Mother() {
    std::cout << "Bye From Mother : " << this->getName() << std::endl;
}  

std::string Mother::getName() {
    return this->name;
}

void Mother::setName(std::string name_entry) {
    this->name = name_entry;
}

int Mother::getAge() {
    return this->age;
}

void Mother::setAge(int age_entry) {
    this->age = age_entry;
}

int Mother::getCounter() {
    return counter;
}

void Mother::displayInfo() {
    std::cout << "Name = " << this->getName() << ", Age = " << this->getAge() << std::endl;
}
