#include <cmath>
#include "Term.h"
void Term::setDegree(int d) { degree = d; }
double Term::getCoefficient() const { return coefficient; }
double Term::calculate(double x) const { return coefficient * std::pow(x, degree); }
