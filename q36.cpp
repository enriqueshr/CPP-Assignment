#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Input number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << (j % 2 == 0 ? 0 : 1);
        }
        cout << endl;
    }

    return 0;
}