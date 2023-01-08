#include <iostream>

class Chatty {
    private:
        std::string name;

    public:
        Chatty();
        Chatty(std::string);
        ~Chatty();

        std::string getName();
        void setName(std::string);

        void displayChatting();

};

int main(int, char **) {
    const int LENGTH = 5;
    Chatty   tab1[LENGTH];
    Chatty * tab2 = new Chatty[LENGTH];

    for (int i=0; i<LENGTH; ++i) {
        tab1[i].displayChatting();
        tab2[i].displayChatting();
    }

    delete tab2;  // Didn't work
    
    return 0;
}

Chatty::Chatty() {
    this->name = "Jane Doe";
    std::cout << "Construction of : " << this->getName() << std::endl;
}

Chatty::Chatty(std::string name_entry = "Jane Doe") : name(name_entry) {
    std::cout << "Construction of : " << this->getName() << std::endl;
}

Chatty::~Chatty() {
    std::cout << "Shut up " << this->getName() << std::endl;
}

std::string Chatty::getName() {
    return this->name;
}

void Chatty::setName(std::string name_entry) {
    this->name = name_entry;
}

void Chatty::displayChatting() {
    std::cout << this->getName() << " : bla bla bla" << std::endl;
}