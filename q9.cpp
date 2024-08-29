#include<iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to calculate the number of days between two dates
int daysBetweenDates(Date date1, Date date2) {
    int days = 0;
    if (date1.year == date2.year) {
        if (date1.month == date2.month) {
            days = date2.day - date1.day;
        } else {
            for (int month = date1.month; month < date2.month; month++) {
                days += daysInMonth(month, date1.year);
            }
            days += date2.day;
            days -= date1.day;
        }
    } else {
        for (int year = date1.year; year < date2.year; year++) {
            if (isLeapYear(year)) {
                days += 366;
            } else {
                days += 365;
            }
        }
        for (int month = 1; month < date2.month; month++) {
            days += daysInMonth(month, date2.year);
        }
        for (int month = date1.month; month <= 12; month++) {
            days -= daysInMonth(month, date1.year);
        }
        days += date2.day;
        days -= date1.day;
    }
    return abs(days);
}
int main() {
    Date date1, date2;
    cout << "Enter the first date (YYYY-MM-DD): ";
    cin >> date1.year >> date1.month >> date1.day;
    cout << "Enter the second date (YYYY-MM-DD): ";
    cin >> date2.year >> date2.month >> date2.day;
    int days = daysBetweenDates(date1, date2);
    cout << "Days between " << date1.year << "/" << date1.month << "/" << date1.day << " to " << date2.year << "/" << date2.month << "/" << date2.day << " = " << days << endl;
    return 0;
}