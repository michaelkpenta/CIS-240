#ifndef CH14_NUMBER_H
#define CH14_NUMBER_H
#include <iosfwd>
class Number {
private:
    int value;
public:
    explicit Number(int value);
    int getValue() const;
    Number(const Number& other);
    Number& operator=(const Number& other);
    Number(Number&& other) noexcept;
    Number& operator=(Number&& other) noexcept;
    Number operator+(const Number& other) const { return Number(value + other.getValue()); }
    bool operator==(const Number& other) const { return value == other.getValue(); }
    friend std::ostream& operator<<(std::ostream& os, const Number& number);
};
#endif
