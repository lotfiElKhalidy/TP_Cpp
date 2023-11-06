#ifndef PAQUET_HPP
#define PAQUET_HPP

using paquet_t = std::vector<std::unique_ptr<Carte>>;

void remplir(paquet_t& paquet, UsineCarte& usine) {
    std::unique_ptr<Carte> carte;
    while ((carte = usine.getCarte()) != nullptr) {
        paquet.push_back(std::move(carte));
    }
}

std::ostream& operator<<(std::ostream& os, const paquet_t& paquet) {
    for (const std::unique_ptr<Carte>& carte : paquet) {
        os << carte->getValeur() << " ";
    }
    return os;
}

#endif