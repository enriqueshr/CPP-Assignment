#include <iostream>
#include <vector>

void createMatrix(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, n));
    
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    createMatrix(n);

    return 0;
}