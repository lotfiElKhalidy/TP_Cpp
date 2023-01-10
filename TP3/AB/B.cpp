#include "B.hpp"
#include "A.hpp"

B::B() : j(0) {}

void B::send(A& a) {
    a.exec(100);
}

void B::exec(int x) {
    j += x;
}
