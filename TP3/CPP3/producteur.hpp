#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur {
    private:
        int travail;
    
    public:
        Producteur();
        int getTravail();
        void setTravail(int);
        void produire(int, std::string);

};

#endif
