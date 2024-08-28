#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> number(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> number[i];
    }
    std::sort(number.begin(), number.end(), std::greater<int>());
    std::cout << "three highest number of array: ";
    for (int i = 0; i < 3; i++)
    {
        std::cout << number[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
    