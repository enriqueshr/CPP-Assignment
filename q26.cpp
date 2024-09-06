#include<iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, count = 2;

    cout << "Input number of terms to display: ";
    cin >> n;

    cout << "Here is the Fibonacci series upto to " << n << " terms:" << endl;
    cout << t1 << " " << t2 << " ";

    while(count < n) {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
        count++;
    }

    return 0;
}