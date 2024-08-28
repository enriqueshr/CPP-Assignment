#include <iostream>

int main() {
    int a, b, sum;
    std::cout << "Input 1st number: ";
    std::cin >> a;
    std::cout << "Input 2nd number: ";
    std::cin >> b;
    sum = a + b;
    int digitCount = 0;
    while (sum > 0) {
        sum /= 10;
        digitCount++;
    }
    std::cout << "The sum of the two numbers is: " << a + b << std::endl;
    std::cout << "The number of digits in the sum value is: " << digitCount << std::endl;
    return 0;
}