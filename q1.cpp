#include <iostream>
#include <string.h>

int main() {
    std::string FirstName, LastName;
    std::cout << "Enter your first name: ";
    std::cin >> FirstName;
    std::cout << "Enter your last name: ";
    std::cin >> LastName;
    std::cout << "Name is reversed as " << LastName << " " << FirstName << std::endl;
return 0;
}