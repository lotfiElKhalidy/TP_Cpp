#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

#include <iostream>
#include <memory>
#include <vector>

class Ressource {
    private:
        int stock;

    public:
        Ressource(int);

        int getStock() const;
        void setStock(int);

        void consommer(int);

};

using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream& operator<<(std::ostream& os, const ressources_t& ressources);

#endif