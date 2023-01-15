#include "statisticien.hpp"
#include <fstream>

bool Statisticien::aCalcule() {
    return this->calcul;
}


void Statisticien::acquerir(std::string nom) {
    std::ifstream  file(nom.c_str());
    int i = 0, n, somme, moyenne, total;

    file >> n;

    while(!file.eof() && i < n) {
        double read;
        file >> read;
        ++i;
        total += (int) read;
    }

    somme = n*(n+1)/2;
    moyenne = total/n;

    this->somme = somme;
    this->moyenne = moyenne;

    file.close();
}
