#include <iostream>
#include <algorithm>
using namespace std;

void findKLargest(int arr[], int n, int k) {
    sort(arr, arr + n, greater<int>());
    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 5, 20, 12, 25, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    findKLargest(arr, n, k);
    return 0;
}