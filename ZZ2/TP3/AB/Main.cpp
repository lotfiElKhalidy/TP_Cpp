#include "A.hpp"
#include "B.hpp"

int main() {
    A unA;
    B unB;

    unA.send(unB);
    unB.send(unA);
    
    return 0;
}
