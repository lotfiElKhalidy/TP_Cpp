#ifndef _FACTORIELLE_HPP_
#define _FACTORIELLE_HPP_

template <int N>
struct Factorielle {
    static const unsigned long valeur = N * Factorielle<N - 1>::valeur;
};

template <>
struct Factorielle<0> {
    static const unsigned long valeur = 1;
};

#endif