#include <iostream>
#include <limits.h>
using namespace std;

void findLargestThree(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    if (n < 3) {
        cout << "Array should have at least three elements!" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
}

int main() {
    int arr[] = {10, 5, 20, 12, 25, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}