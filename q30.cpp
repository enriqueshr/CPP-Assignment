#include<iostream>
using namespace std;

int main() {
    int a, n, d, sum = 0;

    cout << "Input the starting number of the A.P. series: ";
    cin >> a;

    cout << "Input the number of items for the A.P. series: ";
    cin >> n;

    cout << "Input the common difference of A.P. series: ";
    cin >> d;

    for(int i = 0; i < n; i++) {
        sum += a;
        a += d;
    }

    cout << "The Sum of the A.P. series are: ";
    a -= d;
    for(int i = 0; i < n; i++) {
        cout << a << " + ";
        a += d;
    }
    cout << "\b\b = " << sum << endl;

    return 0;
}