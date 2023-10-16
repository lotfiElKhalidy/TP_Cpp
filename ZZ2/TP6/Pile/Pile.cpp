#include "Pile.hpp"

Pile::Pile() : capacity(10), size(0) {
    data = new int[capacity];
}

Pile::Pile(int inCapacity) : capacity(inCapacity), size(0) {
    if (getCapacity() <= 0) {
        throw std::invalid_argument("La taille de la pile doit etre superieure a 0");
    }

    data = new int[capacity];
}

Pile::~Pile() {
    delete [] data;
}

int Pile::getCapacity() {
    return capacity;
}

void Pile::setCapacity(int inCapacity) {
    capacity = inCapacity;
}

int Pile::getSize() {
    return size;
}

void Pile::setSize(int inSize) {
    size = inSize;
}

int Pile::getSommet() {
    return sommet;
}

void Pile::setSommet(int inSommet) {
    sommet = inSommet;
}

bool Pile::empty() {
    if (getCapacity() <= 0) {
        throw std::invalid_argument("La taille de la pile doit etre superieure a 0");
    }

    return (getSize() == 0);
}

void Pile::push(int inElement) {
    if (getSize() < getCapacity()) {
        this->data[getSize()] = inElement;
        setSommet(inElement);
        
        int newSize = getSize() + 1; 
        setSize(newSize);
    } else {
        throw std::invalid_argument("La taille de la pile doit etre superieure a 0");
    }
}

void Pile::pop() {
    if (empty()) {
        throw std::invalid_argument("Pile déjà vide");
    }
    
    setSommet(data[getSize()-2]);
        
    int newSize = getSize() - 1; 
    setSize(newSize);
}

int Pile::top() {
    int size = getSize() - 1;
    return data[size];
}