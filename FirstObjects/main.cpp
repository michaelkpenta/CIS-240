#include <iostream>
#include "Rectangle.h"
#include "Prism.h"
void doStuff(Prism p);
void doStuffWith(Prism &p);
int main() {
    Prism p(4, 3, 4);
    Prism* p1 = new Prism(5, 6, 7);
    doStuff(p);
    doStuffWith(*p1);
    doStuffWith(p);
    delete p1;
    return 0;
}
void doStuff(Prism p) { std::cout << "do stuff" << std::endl; }
void doStuffWith(Prism &p) { std::cout << "do stuff ref" << std::endl; }
