#include "Polynomial.h"
#include <iostream>
#include <stdexcept>
#include "Term.h"
double Polynomial::calculate(double x) {
    double result = 0;
    for (const auto& term : terms) result += term.calculate(x);
    return result;
}
void Polynomial::print() const {
    for (const auto& term : terms)
        std::cout << term.getCoefficient() << "X^" << term.getDegree() << std::endl;
}
void Polynomial::setTerm(int degree, double coef) {
    if (degree < 0) throw std::invalid_argument("degree must be nonnegative");
    const auto index = static_cast<std::size_t>(degree);
    if (terms.size() <= index) terms.resize(index + 1);
    terms[index].setDegree(degree);
    terms[index].setCoefficient(coef);
}
Term Polynomial::getTerm(int degree) { return terms.at(static_cast<std::size_t>(degree)); }
double Polynomial::getCoefTerm(int degree) { return getTerm(degree).getCoefficient(); }
