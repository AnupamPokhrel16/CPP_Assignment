//Write a C++ program to display the pattern like right angle triangle with right justified  digits. 
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for spaces before the numbers in each row (right justify)
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}