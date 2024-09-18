#include <iostream>
#include <string>
#include <unordered_set>

bool containsAllLetters(const std::string& str1, const std::string& str2) {
    std::unordered_set<char> letterSet(str1.begin(), str1.end());
    for (char ch : str2) {
        if (letterSet.find(ch) == letterSet.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str1 = "Python";
    std::string str2 = "Py";
    
    if (containsAllLetters(str1, str2)) {
        std::cout << "All letters from the second string are present in the first string." << std::endl;
    } else {
        std::cout << "Not all letters from the second string are present in the first string." << std::endl;
    }

    return 0;
}