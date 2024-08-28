#include <iostream>

int main() {
    int start, end, sum = 0;
    std::cout << "Input start number: ";
    std::cin >> start;
    std::cout << "Input end number: ";
    std::cin >> end;
    for (int i = start; i <= end; i++) {
        int temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }
    std::cout << "Add up all the digits between " << start << " and " << end << " is: " << sum << std::endl;
    return 0;
}