#ifndef _CARTE_HPP_
#define _CARTE_HPP_

class Carte {
    private:
        unsigned int valeur;

        //Carte(const Carte&) = delete;
        //Carte & operator=(const Carte& other) = delete;

        //friend class UsineCarte;
    
    public:
        unsigned int getValeur() const;
        void setValeur(unsigned int);

};

#endif