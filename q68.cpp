#include <iostream>
#include <vector>
#include <cctype>

bool containsNumber(const std::string& str) {
    for (char ch : str) {
        if (std::isdigit(ch)) {
            return true;
        }
    }
    return false;
}

std::vector<std::string> filterStringsWithNumbers(const std::vector<std::string>& vec) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (containsNumber(str)) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> vec = {"red", "green23", "1black", "white"};
    std::vector<std::string> result = filterStringsWithNumbers(vec);
    
    std::cout << "Strings containing numbers:" << std::endl;
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}