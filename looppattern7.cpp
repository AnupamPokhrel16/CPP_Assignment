//Write a C++ program to display Pascal's triangle like a right angle triangle.
#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate combination nCr
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 0; i < rows; i++) {
        // Inner loop for printing the numbers in each row
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";  // Calculate nCr
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
