#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if(i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;

    return 0;
}