#ifndef _USINE_HPP_
#define _USINE_HPP_

#include <memory>

class Carte;

class UsineCarte {
    private:
        static int compteur;

    public:
        UsineCarte() = default;
        UsineCarte(const int &);
        UsineCarte(const UsineCarte&) = delete;
        UsineCarte& operator=(const UsineCarte&) = delete;

        int numberOfCards = 52;
        
        std::unique_ptr<Carte> getCarte();
        
        static int getCompteur();
        static void setCompteur(int);

};

#endif