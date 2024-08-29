#include <iostream>

bool isPowerOfThree(int num) {
    if (num <= 0)
        return false;
    while (num % 3 == 0)
        num /= 3;
    return num == 1;
}

int main() {
    int num;
    std::cout << "Input a number: ";
    std::cin >> num;
    std::cout << "Is " << num << " a power of three? " << (isPowerOfThree(num) ? "true" : "false") << std::endl;
    return 0;
}