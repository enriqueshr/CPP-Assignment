#include <iostream>

int daysInMonth(int year, int month) {
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return 29;
        else
            return 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int main() {
    int year, month;
    std::cout << "Input Year: ";
    std::cin >> year;
    std::cout << "Input Month: ";
    std::cin >> month;
    std::cout << "Number of days of the year " << year << " and month " << month << " is: " << daysInMonth(year, month) << std::endl;
    return 0;
}