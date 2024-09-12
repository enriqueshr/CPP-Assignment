#include <iostream>
#include <vector>
using namespace std;

vector<int> findSmallerThanNeighbors(const vector<int>& vec) {
    vector<int> result;

    for (size_t i = 1; i < vec.size() - 1; i++) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    vector<int> vec = {1, 2, 5, 0, 3, 1, 7};
    
    cout << "Original Vector elements: ";
    for (int v : vec)
        cout << v << " ";
    cout << endl;

    vector<int> result = findSmallerThanNeighbors(vec);

    cout << "Vector elements that are smaller than their adjacent neighbours: ";
    if (result.empty())
        cout << "None" << endl;
    else {
        for (int v : result)
            cout << v << " ";
        cout << endl;
    }

    return 0;
}