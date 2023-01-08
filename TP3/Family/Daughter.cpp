#include <iostream>
#include "Daughter.hpp"

Daughter::Daughter() {
    this->name = "Jane Doe (daughter)";
    this->age = -1;
}

Daughter::Daughter(std::string name_entry, int age_entry) {
    this->name = name_entry;
    this->age = age_entry;
}

Daughter::~Daughter() {
    std::cout << "Bye From Daughter : " << this->getName() << std::endl;
}
