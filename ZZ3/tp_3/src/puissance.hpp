#ifndef _PUISSANCE_HPP_
#define _PUISSANCE_HPP_

template <int N>
struct Puissance {
    static double valeur(double x) {
        return x * Puissance<N - 1>::valeur(x);
    }
};

template <>
struct Puissance<0> {
    static double valeur(double x) {
        return 1.0;
    }
};

#endif