#include<iostream>
#include<string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1') {
            decimal += (1 << (binary.length() - i - 1));
        }
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;
    cout << "The decimal number: " << binaryToDecimal(binary) << endl;
    return 0;
}