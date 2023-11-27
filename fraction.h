#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den);
    Fraction(const Fraction& other);

    int getNumerator() const;
    int getDenominator() const;

    Fraction add(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    void print() const;

private:
    int gcd(int a, int b) const;
    void simplify();
};
