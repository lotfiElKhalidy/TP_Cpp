#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>
#include <sstream>
#include <cstring>
#include <algorithm>

class Vecteur {
    private:
        int capacity;
        int size;
        double * vecteur;

    public:
        Vecteur();
        Vecteur(const int &);
        ~Vecteur();


        int getCapacity();
        void setCapacity(int);
        int getSize();
        void setSize(int);

        void push_back(double);

        void displayInfo();
        Vecteur& operator=(Vecteur&);
        double & operator[](const int &);
};


#endif