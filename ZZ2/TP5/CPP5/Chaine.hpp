#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  {
    private:
        int capa;
        char * tab;
    
    public:
        Chaine();
        Chaine(const char *);
        Chaine(int);
        Chaine(const Chaine &);
        ~Chaine();


        int getCapacite() const;
        void setCapacite(int);
        char * c_str() const;
        void afficher(std::ostream &) const;
        Chaine & operator=(const Chaine &);
        char & operator[](int index);

        //friend std::ostream operator<<(std::ostream, const Chaine &);
};

std::ostream & operator<<(std::ostream &, const Chaine &);


#endif
