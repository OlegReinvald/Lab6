#include "fraction.h"
using namespace std;

int main() {
    Fraction fraction1(3, 4);
    Fraction fraction2(1, 2);

    Fraction sum = fraction1.add(fraction2);
    Fraction product = fraction1.multiply(fraction2);
    Fraction divide_result = fraction1.divide(fraction2);

    std::cout << "Sum: ";
    sum.print();
    std::cout << std::endl;

    std::cout << "Multiplication: ";
    product.print();
    std::cout << std::endl;

    std::cout << "Dividity: ";
    divide_result.print();
    std::cout << std::endl;

    return 0;
}