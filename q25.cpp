#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void nonPrimeNumbers(int upperbound) {
    cout << "The non-prime numbers are: ";
    for (int i = 2; i <= upperbound; i++) {
        if (!isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int upperbound;
    cout << "Input the upperlimit: ";
    cin >> upperbound;
    nonPrimeNumbers(upperbound);
    return 0;
}