#ifndef POLYS_POLYNOMIAL_H
#define POLYS_POLYNOMIAL_H
#include <vector>
#include "Term.h"
class Polynomial {
public:
    double calculate(double x);
    void setTerm(int degree, double coef);
    Term getTerm(int degree);
    double getCoefTerm(int degree);
    void print() const;
private:
    std::vector<Term> terms;
};
#endif
