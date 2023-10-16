#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

class Statisticien {
	private:
        bool calcul;
        int somme;
        int moyenne;

    public:
        bool aCalcule();
        void acquerir(std::string);

};

#endif