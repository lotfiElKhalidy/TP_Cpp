#ifndef A_HPP
#define A_HPP

class B;

class A {
    private:
        int i;

    public:
        A();
        void send(B& b);
        void exec(int x);
};

#endif
