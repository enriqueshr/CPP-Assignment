#include <iostream>
#include <limits.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        return -1;  // No second largest element
    return second;
}

int main() {
    int arr[] = {10, 5, 20, 20, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, n);

    if (result == -1)
        cout << "No second largest element found." << endl;
    else
        cout << "The second largest element is: " << result << endl;

    return 0;
}