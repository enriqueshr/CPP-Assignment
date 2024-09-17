#include <iostream>
#include <vector>
#include <string>
#include <cctype> // For isdigit()

using namespace std;

// Function to check if a string contains any number
bool containsNumber(const string &s) {
    for (char c : s) {
        if (isdigit(c)) return true;  // Check if the character is a digit
    }
    return false;
}

// Function to find strings containing a number
vector<string> findStringsWithNumbers(const vector<string> &vec) {
    vector<string> result;
    for (const string &s : vec) {
        if (containsNumber(s)) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> vec = {"red", "green23", "1black", "white"};

    cout << "Original Vector elements:\n";
    for (const auto &s : vec) {
        cout << s << " ";
    }
    cout << endl;

    vector<string> result = findStringsWithNumbers(vec);

    cout << "Find strings that contain a number(s) from the said vector:\n";
    if (result.empty()) {
        cout << "None";
    } else {
        for (const auto &s : result) {
            cout << s << " ";
        }
    }

    return 0;
}