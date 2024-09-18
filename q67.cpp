#include <iostream>
#include <vector>
#include <cctype>

void capitalizeFirstLetter(std::vector<std::string>& vec) {
    for (auto& str : vec) {
        if (!str.empty()) {
            str[0] = std::toupper(str[0]);
        }
    }
}

int main() {
    std::vector<std::string> vec = {"red", "green", "black", "white", "Pink"};
    
    capitalizeFirstLetter(vec);
    
    std::cout << "Capitalized vector elements:" << std::endl;
    for (const auto& str : vec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}