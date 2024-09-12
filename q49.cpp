#include <iostream>
#include <string>
using namespace std;

string removeChar(string str, char ch) {
    string result;
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    char toRemove;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to remove: ";
    cin >> toRemove;

    string updatedString = removeChar(input, toRemove);
    cout << "Updated string: " << updatedString << endl;

    return 0;
}