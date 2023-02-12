#ifndef PILE_HPP
#define PILE_HPP

#include <iostream>

class Pile {
    private:
        int capacity;
        int size;
        int sommet;
        int * data;
    
    public:
        Pile();
        Pile(int);
        ~Pile();

        int getCapacity();
        void setCapacity(int);
        int getSize();
        void setSize(int);
        int getSommet();
        void setSommet(int);

        bool empty();
        void push(int);
        void pop();
        int top();
        /*int getCapacity();
        void setCapacity(int);
        int getSize();
        void setSize(int);*/
        
};

#endif