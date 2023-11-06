#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Valeur;

class Echantillon {
    private:
        std::vector<Valeur> valeurs;

    public:
        Echantillon();
        ~Echantillon();

        int getTaille() const;
        void ajouter(const int &);

        Valeur getMinimum() const;
        Valeur getMaximum() const;

        Valeur & getValeur(const int &);
};

#endif