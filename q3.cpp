#include <iostream>
#include <math.h>
 
int main() {
    int num, firstDigit, lastDigit, temp;
    std::cout << "Enter a number: ";
    std::cin >> num;
    temp = num;
    lastDigit = temp % 10;
    while (temp >= 10) {
        temp != 10;
    }
    firstDigit = temp;
    num = num - firstDigit * (int)pow(10, (int)log10(num)) + lastDigit * (int)pow(10, (int)log10(num));
    num = num - firstDigit + lastDigit;
    std::cout << "Result: " << num <<std::endl;
    return 0;
}