#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;

    char ch = 'A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
            if(ch > 'Z') ch = 'A';
        }
        for(int j = i - 1; j >= 1; j--) {
            ch--;
            if(ch < 'A') ch = 'Z';
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}