#include <iostream>

void fonction1(int a) {
    std::cout << "F1 - Reference : " << &a << std::endl;
    std::cout << "Value of the variable : " << a << std::endl;
}

void fonction2(int& a) {
    std::cout << "F2 - Reference : " << &a << std::endl;
    std::cout << "Value of the variable : " << a << std::endl;
}

void exchangeValuesThroughPionters(int* a, int* b) {
    std::cout << "Before : " << *a << " " << *b << std::endl;
    
    int c = *b;
    *b = *a;
    *a = c;
    
    std::cout << "After : " << *a << " " << *b << std::endl;
}

void exchangeValuesThroughReferences(int& a, int& b) {
    std::cout << "Before : " << a << " " << b << std::endl;
    
    int c = b;
    b = a;
    a = c;
    
    std::cout << "After : " << a << " " << b << std::endl;
}


int main(int, char **) {
    int age = 45;

    std::cout << "Reference of age : " << &age << std::endl;
    fonction1(age);
    fonction2(age);

    std::cout << "-------------------------------------------" << std::endl;

    int  a = 3;
    int  b = a;
    int& c = a;

    std::cout << a << " " << b << " " << c << std::endl;
    b = 4;
    std::cout << a << " " << b << " " << c << std::endl;
    c = 5;
    std::cout << a << " " << b << " " << c << std::endl;
    a = 6;
    std::cout << a << " " << b << " " << c << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    exchangeValuesThroughPionters(&a, &b);
    exchangeValuesThroughReferences(a, b);

    return 0;
}