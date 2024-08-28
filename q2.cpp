#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter 1st numbers: ";
    std::cin >> a ;
    std::cout << "Enter 2nd numbers: ";
    std::cin >> b ;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout << "Swapped numbers are: " << a <<std::endl;
    std::cout << "Swapped numbers are: " << b <<std::endl;
    return 0;
}