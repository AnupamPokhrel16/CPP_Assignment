//Write a C++ program to create an n x n matrix by taking an integer (n) as input from  the user. 
#include <iostream>
#include <vector>
using namespace std;

void createMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, n)); // Create an n x n matrix filled with n

    cout << "Create an n x n matrix by said integer:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    if (n <= 0) {
        cout << "Matrix size should be a positive integer." << endl;
    } else {
        createMatrix(n);
    }

    return 0;
}
