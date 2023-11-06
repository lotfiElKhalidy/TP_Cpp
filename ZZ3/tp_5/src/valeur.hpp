#ifndef VALEUR_HPP
#define VALEUR_HPP

class Valeur {
    private:
        double nombre;

    public:
        Valeur();
        Valeur(const double &);
        ~Valeur();

        double getNombre() const;
        void setNombre(const double &);

        bool operator<(const Valeur &other) const;
};

#endif