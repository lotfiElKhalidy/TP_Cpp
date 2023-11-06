#ifndef CONSOMMATEUR_HPP
#define CONSOMMATEUR_HPP

#include <iostream>
#include <memory>

class Ressource;

class Consommateur {
    private:
        int besoin;
        std::shared_ptr<Ressource> ressource;

    public:
        Consommateur(int besoin, std::shared_ptr<Ressource> ressource);

        void puiser();
};

#endif