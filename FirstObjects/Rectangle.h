#ifndef FIRSTOBJECTS_RECTANGLE_H
#define FIRSTOBJECTS_RECTANGLE_H
#include <iostream>
class Rectangle {
public:
    Rectangle() : Rectangle(1, 1) { std::cout << "delegating constructor" << std::endl; }
    Rectangle(double w, double h) : width{w}, height{h} { std::cout << "non empty constructor" << std::endl; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }
private:
    double width{0};
    double height{0};
};
#endif
