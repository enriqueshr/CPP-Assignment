#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    std::cout << "Enter the position of Fibonacci number to find: ";
    std::cin >> n;

    int result = fibonacci(n);
    
    std::cout << "Fibonacci number at position " << n << " is: " << result << std::endl;
    return 0;
}