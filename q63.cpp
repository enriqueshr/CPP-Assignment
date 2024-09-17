#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if all letters of second string are present in the first string
bool allLettersPresent(const string &first, const string &second) {
    for (char c : second) {
        if (first.find(c) == string::npos) {
            return false;  // If any letter from second string is not found in the first string
        }
    }
    return true;
}

int main() {
    string first = "Python";
    string second = "Py";

    cout << "Original String elements: " << first << " " << second << endl;

    bool result = allLettersPresent(first, second);

    cout << "Check - First string contains all letters from second string: " 
         << (result ? "true" : "false") << endl;

    return 0;
}