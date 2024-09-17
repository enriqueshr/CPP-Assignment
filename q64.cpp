#include <iostream>
#include <vector>

using namespace std;

void createMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, n));  // Create an n x n matrix filled with the value n

    cout << "Create an n x n matrix by said integer:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Input an integer value: ";
    cin >> n;

    createMatrix(n);

    return 0;
}