#include <iostream>
#include "Distance.h"
#include "Number.h"
Number foo(Number& n);
int main() {
    std::cout << "New A ";
    Number a{10};
    std::cout << "New B = a ";
    Number b = a;
    std::cout << "New C ";
    Number c{20};
    std::cout << "C = A ";
    c = a;
    std::cout << "D ";
    Number d{7};
    std::cout << "D = B ";
    d = b;
    Number e = d + a;
    std::cout << e;
    if (a == e) std::cout << "The two numbers are the same" << std::endl;
    return 0;
}
Number foo(Number& n) {
    std::cout << n.getValue() << std::endl;
    Number b{3};
    return b;
}
