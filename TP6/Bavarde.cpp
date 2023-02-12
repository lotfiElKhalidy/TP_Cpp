#include <iostream>

class Bavarde {
        std::string nom;
    
    public :
        Bavarde(std::string n) : nom(n) {
            std::cout << "constructeur " << nom << std::endl;
        }

        ~Bavarde() {
            std::cout << "destructeur " << nom << std::endl;
        }
};

Bavarde g("global");

int main(int, char **) {
   Bavarde t("local");
   static Bavarde s("statlocal");

   //std::exit(1);   // Ne détruit pas tout ce qui sort du cadre de la fonction dans laquelle std::exit() a été appelée
   //std::terminate();   / rien n'est détruit
   //std::unexpected(); // ne s'appelle pas normalement
   return 0;
}