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

int lastPrimeBefore(int num) {
    for (int i = num - 1; i >= 2; i--) {
        if (isPrime(i)) {
            return i;
        }
    }
    return -1;
}