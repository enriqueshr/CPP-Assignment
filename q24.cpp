#include<iostream>
using namespace std;

void fibonacciSeries(int n) {
    int a = 0, b = 1;
    cout << "Here is the Fibonacci series upto to " << n << " terms:" << endl;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;
    fibonacciSeries(n);
    return 0;
}