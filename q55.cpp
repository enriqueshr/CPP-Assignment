#include <iostream>
using namespace std;

void findTwoRepeatingElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[abs(arr[i])] > 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        } else {
            cout << abs(arr[i]) << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The two repeating elements are: ";
    findTwoRepeatingElements(arr, n);
    return 0;
}