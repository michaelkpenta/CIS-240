#include "Number.h"
#include <iostream>
Number::Number(int v) : value{v} { std::cout << "Number constructor called" << std::endl; }
int Number::getValue() const { return value; }
Number::Number(const Number& other) : value{other.getValue()} { std::cout << "Number copy constructor called" << std::endl; }
Number& Number::operator=(const Number& other) {
    value = other.getValue();
    std::cout << "Number assignment operator called" << std::endl;
    return *this;
}
Number::Number(Number&& other) noexcept : value{other.value} { std::cout << "Number move constructor called" << std::endl; }
Number& Number::operator=(Number&& other) noexcept {
    value = other.value;
    std::cout << "Number move assignment operator called" << std::endl;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Number& number) {
    return os << "the value is " << number.value << std::endl;
}
