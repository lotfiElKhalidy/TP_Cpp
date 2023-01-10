#include "A.hpp"
#include "B.hpp"

A::A() : i(0) {}

void A::send(B& b) {
    b.exec(100);
}

void A::exec(int x) {
    i += x;
}
