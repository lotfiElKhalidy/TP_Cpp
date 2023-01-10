#ifndef B_HPP
#define B_HPP

class A;

class B {
    private:
        int j;

    public:
        B();
        void send(A& a);
        void exec(int x);
};

#endif