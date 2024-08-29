#include <iostream>

int sqrt(int num) {
    int i = 1;
    while (i * i <= num)
        i++;
    return i - 1;
}

int main() {
    int num;
    std::cout << "Input a number: ";
    std::cin >> num;
    std::cout << "Square root of " << num << " = " << sqrt(num) << std::endl;
    return 0;
}