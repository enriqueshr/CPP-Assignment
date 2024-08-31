#include<iostream>
using namespace std;

int seriesSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int term = 0;
        for (int j = 0; j < i; j++) {
            term = term * 10 + 1;
        }
        sum += term;
    }
    return sum;
}

int main() {
    int n;
    cout << "Input number of terms: ";
    cin >> n;
    cout << "1";
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "1";
        }
        cout << " + ";
    }
    cout << endl;
    cout << "The sum of the series is: " << seriesSum(n) << endl;
    return 0;
}