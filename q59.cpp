#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;  // Number to search for

    int occurrences = countOccurrences(arr, n, x);
    cout << "Number " << x << " occurs " << occurrences << " times in the array." << endl;

    return 0;
}