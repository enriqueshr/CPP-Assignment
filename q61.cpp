#include <iostream>
#include <vector>
#include <string>
#include <cctype> // For toupper()

using namespace std;

vector<string> capitalizeFirstLetter(vector<string> &vec) {
    for (string &s : vec) {
        if (!s.empty()) {
            s[0] = toupper(s[0]);  // Capitalize the first letter of each word
        }
    }
    return vec;
}

int main() {
    vector<string> vec = {"red", "green", "black", "white", "Pink"};

    cout << "Original Vector elements:\n";
    for (const auto &s : vec) {
        cout << s << " ";
    }
    cout << endl;

    vec = capitalizeFirstLetter(vec);

    cout << "Capitalize the first character of each vector element:\n";
    for (const auto &s : vec) {
        cout << s << " ";
    }

    return 0;
}