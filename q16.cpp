#include<iostream>
#include<string>
using namespace std;

string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else {
            binary[i] = '0';
        }
    }
    return binary;
}

int main() {
    string binary;
    cout << "Input a 8 bit binary value: ";
    cin >> binary;
    cout << "The original binary = " << binary << endl;
    cout << "After ones complement the number = " << onesComplement(binary) << endl;
    return 0;
}