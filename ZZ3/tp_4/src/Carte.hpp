#ifndef _CARTE_HPP_
#define _CARTE_HPP_

#include <iostream>

class Carte {
    private:
        unsigned int valeur;
        static int compteur;

        //Carte(const Carte&) = delete;
        Carte & operator=(const Carte& other) = delete;

        //friend class UsineCarte;
    
    public:
        unsigned int getValeur() const;
        void setValeur(unsigned int);

        static int getCompteur();
        static void setCompteur(int);

};

#endif