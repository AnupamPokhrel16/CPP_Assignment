//Write a C++ program to make such a pattern, like a pyramid, with a repeating  number. 
#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Inner loop for numbers
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << i;  // The number to be printed is the row number
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}