#include "Vecteur.hpp"

Vecteur::Vecteur() : capacity(10), size(0) {
    vecteur = new double[capacity];
            
    if (!vecteur) {
        std::cout << "Error: Allocation impossible\n";
    }
};

Vecteur::Vecteur(const int & inCapacity) : capacity(inCapacity), size(0) {
    vecteur = new double[capacity];

    if (!vecteur) {
        std::cout << "Error: Allocation impossible\n";
    }    
}

Vecteur::~Vecteur() {
    delete [] vecteur;
}

int Vecteur::getCapacity() {
    return capacity;
}

void Vecteur::setCapacity(int inCapacity) {
    capacity = inCapacity;
}

int Vecteur::getSize() {
    return size;
}

void Vecteur::setSize(int inSize) {
    size = inSize;
}

void Vecteur::push_back(double inElement) {
    if (size == capacity) {
        setCapacity(getCapacity()*2);

        double * vecteur_tmp = new double[capacity];

        if (!vecteur_tmp) {
            std::cout << "Error: Allocation impossible\n";
        }

        std::copy(vecteur, vecteur + getSize(), vecteur_tmp);
        //memcpy(vecteur_tmp, vecteur, getSize());

        vecteur = vecteur_tmp;

        if (vecteur_tmp)
            delete[] vecteur_tmp;
    }

    vecteur[getSize()] = inElement;
    setSize(getSize()+1);
}

void Vecteur::displayInfo() {
    std::cout << "-------------------------\n";
    std::cout << "Capacity: ";
    std::cout << this->getCapacity();
    std::cout << "\n";
    std::cout << "Size: ";
    std::cout << this->getSize();
    std::cout << "\n";
    std::cout << "Vecteur: ";

    for (int i=0; i<getSize(); i++) {
        std::cout << vecteur[i];
        std::cout << " ";
    }
    std::cout << "\n";
    std::cout << "-------------------------\n";
}


Vecteur& Vecteur::operator=(Vecteur & inVecteur) {
    
    if (&inVecteur != this) {
        delete [] vecteur;

        this->setCapacity(inVecteur.getCapacity());
        this->setSize(inVecteur.getSize());

        vecteur = new double[getCapacity()];

        if (vecteur) {
            memcpy(vecteur, inVecteur.vecteur, getSize());
        } else {
            std::cout << "Error: Allocation impossible\n";
        }
    }

    return *this;
}

double & Vecteur::operator[](const int & inIndex) {

    if (inIndex >= 0 && inIndex < size) {
        return vecteur[inIndex];
    } else {
        std::cout << "Invalid index\n";
        exit(0);
    }
}