#ifndef POLYS_TERM_H
#define POLYS_TERM_H
class Term {
private:
    double coefficient{0};
    int degree{0};
public:
    void setCoefficient(double co) { coefficient = co; }
    void setDegree(int d);
    double getCoefficient() const;
    int getDegree() const { return degree; }
    double calculate(double x) const;
};
#endif
