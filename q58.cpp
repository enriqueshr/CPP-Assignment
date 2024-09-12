#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string findThirdLargestString(vector<string>& arr) {
    sort(arr.begin(), arr.end(), greater<string>());
    if (arr.size() < 3) return "Not enough strings!";
    return arr[2];
}

int main() {
    vector<string> arr = {"apple", "banana", "orange", "pear", "mango"};
    cout << "The third largest string is: " << findThirdLargestString(arr) << endl;
    return 0;
}