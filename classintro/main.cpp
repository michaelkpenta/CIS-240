#include <iostream>
#include "Counter.h"
int main() {
    Counter first;
    Counter second{};
    Counter third{5};
    first.increment();
    third.increment();
    std::cout << first.getValue() << ' ' << second.getValue() << ' ' << third.getValue() << '\n';
}
