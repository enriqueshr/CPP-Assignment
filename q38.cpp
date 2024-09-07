#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Input the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}