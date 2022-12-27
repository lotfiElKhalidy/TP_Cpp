#include <iostream>

const int LENGTH = 10;

int main(int, char **) {
    int tab[LENGTH];
    
    for (int i=0; i < LENGTH; ++i) {
        tab[i] = i % 2;
        std::cout << tab[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
