#include<iostream>
#include<string>
using namespace std;

string decimalToHexadecimal(int decimal) {
    string hexadecimal = "";
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal = (char)(remainder + '0') + hexadecimal;
        } else {
            hexadecimal = (char)(remainder - 10 + 'A') + hexadecimal;
        }
        decimal /= 16;
    }
    return hexadecimal;
}

int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The hexadecimal number is : " << decimalToHexadecimal(decimal) << endl;
    return 0;
}