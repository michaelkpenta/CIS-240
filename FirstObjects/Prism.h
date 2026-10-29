#ifndef FIRSTOBJECTS_PRISM_H
#define FIRSTOBJECTS_PRISM_H
#include "Rectangle.h"
#include <iostream>
class Prism {
public:
    Prism(double l, double w, double h) : height{h}, rect{l, w} {
        std::cout << "Prism constructor called" << std::endl;
    }
    ~Prism() { std::cout << "Prism destructor called" << std::endl; }
private:
    double height;
    Rectangle rect;
};
#endif
