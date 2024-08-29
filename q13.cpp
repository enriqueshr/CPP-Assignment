#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i))
            count++;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Input a number: ";
    std::cin >> n;
    std::cout << "Number of prime numbers less than " << n << " is " << countPrimes(n) << std::endl;
    return 0;
}