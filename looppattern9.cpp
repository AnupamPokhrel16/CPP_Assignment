//. Write a C++ program that displays the pattern with the highest columns in the first  row and digits with the right justified digits. 
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for right justification
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print numbers in each row
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
