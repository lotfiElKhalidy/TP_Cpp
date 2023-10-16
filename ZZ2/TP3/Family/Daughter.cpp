#include <iostream>
#include "Daughter.hpp"

Daughter::Daughter() : Mother() {

}

Daughter::Daughter(std::string name_entry, int age_entry) : Mother(name_entry, age_entry) {

}

Daughter::~Daughter() {
    std::cout << "Bye From Daughter : " << this->getName() << std::endl;
}
