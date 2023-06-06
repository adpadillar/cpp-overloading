#include "../include/Rectangular.h"
#include <iostream>
#include <ostream>

int main() {
    Rectangular r1(1, 2);
    Rectangular r2(-1, -2);

    Rectangular r3 = r1.suma(r2);
    Rectangular r4 = r1 + r2;

    std::cout << r3 << std::endl;
    std::cout << r4 << std::endl;
};
