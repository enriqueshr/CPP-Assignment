#include <iostream>
#include <algorithm>
using namespace std;

void findSecondLowestAndHighest(int arr[], int n) {
    sort(arr, arr + n);

    cout << "Second Lowest: " << arr[1] << endl;
    cout << "Second Highest: " << arr[n - 2] << endl;
}

int main() {
    int arr[] = {10, 5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findSecondLowestAndHighest(arr, n);
    return 0;
}