#include <iostream>
using namespace std;

int findMissingElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i) {
            return i;
        }
    }
    return n;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest missing element is: " << findMissingElement(arr, n) << endl;
    return 0;
}