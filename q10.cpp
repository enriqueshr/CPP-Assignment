#include <iostream>

int singleDigit(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    if (sum >= 10)
        return singleDigit(sum);
    else
        return sum;
}

int main() {
    int num;
    std::cout << "Input a number: ";
    std::cin >> num;
    std::cout << "The single digit result is: " << singleDigit(num) << std::endl;
    return 0;
}