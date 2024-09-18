#include <iostream>
#include <vector>
#include <algorithm> // for std::lower_bound and std::upper_bound

int countOccurrences(const std::vector<int>& arr, int num) {
    // Use lower_bound to find the first occurrence of the number
    auto lower = std::lower_bound(arr.begin(), arr.end(), num);
    
    // Use upper_bound to find the position after the last occurrence
    auto upper = std::upper_bound(arr.begin(), arr.end(), num);
    
    // Calculate the number of occurrences
    return upper - lower;
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    int num;
    std::cout << "Enter a number to find occurrences: ";
    std::cin >> num;

    int count = countOccurrences(arr, num);
    std::cout << "Number of occurrences of " << num << ": " << count << std::endl;
    
    return 0;
}