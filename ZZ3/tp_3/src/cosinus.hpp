#ifndef _COSINUS_HPP_
#define _COSINUS_HPP_

#include "factorielle.hpp"
#include "puissance.hpp"

template <int N>
struct Cosinus {
    static double term(const double & x) {
        return Puissance<N>::valeur(-1) * ( Puissance<2*N>::valeur(x) / Factorielle<2*N>::valeur );
    }

    static double valeur(const double & x) {
        return Cosinus<N - 1>::valeur(x) + term(x);
    }
};

template <>
struct Cosinus <0> {
    static double term(const double&) {
        return 1.;
    }

    static double valeur(const double&) {
        return 1.;
    }
};

template <int N>
struct Sinus {
    static double term(const double & x) {
        return Puissance<N>::valeur(x) / Factorielle<N>::valeur;
    }

    static double valeur(const double & x) {
        return Sinus<N - 2>::valeur(x) + term(x) * (N % 4 == 3 ? -1 : 1);
    }
};

template <>
struct Sinus <0> {
    static double term(const double&) {
        return .0;
    }

    static double valeur(const double&) {
        return .0;
    }
};

template <>
struct Sinus<1> {
    static double term(double x) {
        return x;
    }

    static double valeur(double x) {
        return x;
    }
};

#endif