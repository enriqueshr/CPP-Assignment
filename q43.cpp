#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();
    for(int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}