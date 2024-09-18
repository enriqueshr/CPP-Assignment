#include <iostream>
#include <vector>

std::vector<int> findSmallerThanNeighbors(const std::vector<int>& vec) {
    std::vector<int> result;
    for (size_t i = 1; i < vec.size() - 1; ++i) {
        if (vec[i] < vec[i-1] && vec[i] < vec[i+1]) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> vec = {1, 2, 5, 0, 3, 1, 7};
    std::vector<int> result = findSmallerThanNeighbors(vec);
    
    std::cout << "Vector elements that are smaller than adjacent neighbours: ";
    for (int n : result) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}