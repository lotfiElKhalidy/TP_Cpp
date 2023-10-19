#ifndef _EXPONENTIELLE_HPP_
#define _EXPONENTIELLE_HPP_

#include "factorielle.hpp"
#include "puissance.hpp"

template <int N>
struct Exponentielle {
    static double term(const double & x) {
        return Puissance<N>::valeur(x) / Factorielle<N>::valeur;
    }

    static double valeur(const double & x) {
        return Exponentielle<N - 1>::valeur(x) + term(x);
    }
};

template <>
struct Exponentielle<0> {
    static double term(const double&) {
        return 1;
    }

    static double valeur(const double&) {
        return 1;
    }
};

#endif