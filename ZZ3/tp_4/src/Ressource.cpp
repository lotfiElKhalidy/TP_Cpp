#include "Ressource.hpp"

Ressource::Ressource(int stock) {
    this->stock = stock;
}

int Ressource::getStock() const{
    return stock;
}

void Ressource::setStock(int stock) {
    this->stock = stock;
}

void Ressource::consommer(int quantite) {
    if (quantite <= getStock())
        setStock(getStock()-quantite);
}

//using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream& operator<<(std::ostream& os, const ressources_t& ressources) {
    for (const auto& r : ressources) {
        if (auto shared = r.lock()) {
            os << shared->getStock() << " ";
        } else {
            os << "- ";
        }
    }
    return os;
}