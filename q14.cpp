#include<iostream>
using namespace std;

int main() {
    int num, product = 1;
    cout << "Input a number: ";
    cin >> num;
    while(num != 0) {
        product *= num % 10;
        num /= 10;
    }
    cout << "The product of digits is: " << product << endl;
    return 0;
}