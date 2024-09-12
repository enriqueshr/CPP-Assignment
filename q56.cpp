#include <iostream>
#include <unordered_map>
using namespace std;

int findFirstRepeating(int arr[], int n) {
    unordered_map<int, int> elementMap;

    for (int i = 0; i < n; i++) {
        elementMap[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (elementMap[arr[i]] > 1) {
            return arr[i];
        }
    }
    return -1; // No repeating element found
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findFirstRepeating(arr, n);

    if (result != -1)
        cout << "The first repeating element is: " << result << endl;
    else
        cout << "No repeating element found." << endl;

    return 0;
}