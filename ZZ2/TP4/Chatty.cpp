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
        void test1(Chatty);
        void test2(Chatty &);
        void test3(Chatty *);

};

int main(int, char **) {
    Chatty c1;
    Chatty c2;
    Chatty * c3 = new Chatty("Papi");

    c1.test1(c1);
    c2.test2(c2);
    c3->test3(c3);

    delete c3;
    
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

void Chatty::test1(Chatty c) {
    std::cout << "appel de fonction avec parametre objet et copie (destructeur appelé 2 fois) \n";
}

void Chatty::test2(Chatty & c) {
    std::cout << "appel de fonction avec référence (pas de copie) \n";
}

void Chatty::test3(Chatty * c) {
    std::cout << "appel de fonction avec un pointeur sur un objet (pas de copie) \n";
}
