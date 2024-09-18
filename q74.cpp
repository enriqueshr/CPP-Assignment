#include <iostream>

void reverseString(std::string& str, int start, int end) {
    if (start >= end) {
        return;
    } else {
        std::swap(str[start], str[end]);
        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    std::string str;
    
    std::cout << "Enter a string: ";
    std::cin >> str;

    reverseString(str, 0, str.length() - 1);
    
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}