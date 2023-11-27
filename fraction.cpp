#include "fraction.h"

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    if (denominator == 0) {
        std::cout << "Error! Denominator can't equal 0" << std::endl;
        exit(1);
    }

    simplify();
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::add(const Fraction& other) const {
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::multiply(const Fraction& other) const {
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::divide(const Fraction& other) const {
    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
}

void Fraction::print() const {
    if (denominator == 1) {
        std::cout << numerator;
    } else {
        std::cout << numerator << "/" << denominator;
    }
}

int Fraction::gcd(int a, int b) const {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void Fraction::simplify() {
    int gcdValue = gcd(numerator, denominator);
    numerator /= gcdValue;
    denominator /= gcdValue;

    if (denominator < 0) {
        numerator *= -1;
        denominator *= -1;
    }
}
