#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;
    
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    if (isPalindrome(input))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}