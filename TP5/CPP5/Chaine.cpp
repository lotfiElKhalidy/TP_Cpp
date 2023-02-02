#include "Chaine.hpp"
#include <cstring>

Chaine::Chaine() {
    std::cout << "Constructeur par défaut\n";

    capa = -1;
    tab = nullptr;
}

Chaine::Chaine(const char * inCs) {
    if (inCs) {
        capa = strlen(inCs);
        tab = new char[capa];

        if (tab) {
            strcpy(tab, inCs);
        } else {
            std::cout << "ERREUR: Allocation impossible\n";
        }
    } else {
        capa = -1;
        tab = nullptr;
    }
}

Chaine::Chaine(int inCapacite) {
    capa = inCapacite;
    tab = new char[capa];

    if (!tab) {
        std::cout << "ERREUR: Allocation impossible\n";
    }
}

Chaine::Chaine(const Chaine & inChaine) {
    std::cout << "Constructeur de copie\n";

    capa = inChaine.getCapacite();

    if (capa) {
        tab = new char[capa];

        if (tab) {
            strcpy(tab, inChaine.tab);
        } else {
            std::cout << "ERREUR: Allocation impossible\n";
        }
    } else {
        tab = nullptr;
    }
}


Chaine::~Chaine() {
    delete [] tab;
}


int Chaine::getCapacite() const {
   return capa;
}


void Chaine::setCapacite(int capacite) {
   capa = capacite;
}


char * Chaine::c_str() const {
   return tab;
}


void Chaine::afficher(std::ostream & flux = std::cout) const {
    flux << tab;
}


Chaine & Chaine::operator=(const Chaine & inChaine) {
    std::cout << "Opérateur d'affectation\n";

    if (&inChaine != this) {
        delete [] tab;
        capa = inChaine.getCapacite();

        if (capa) {
            tab = new char[capa];

            if (tab) {
                strcpy(tab, inChaine.tab);
            } else {
                std::cout << "ERREUR: Allocation impossible\n";
            }
        } else {
            tab = nullptr;
        }
    }

    return *this;
}


std::ostream & operator<<(std::ostream & os, const Chaine & inChaine) {
    std::cout << "Surcharge de l'opérateur <<\n";

    if (inChaine.getCapacite()) {
        os << inChaine.c_str();
    }

    return os;
}

char & Chaine::operator[](int index) {
    std::cout << "Surcharge de l'opérateur []\n";

    if (index >= 0 && index < capa) {
        return this->c_str()[index];
    } else {
        std::cout << "Invalid index\n";
        exit(0);
    }
}