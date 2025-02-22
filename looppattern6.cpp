//Write a C++ program to print Floyd's Triangle. 
#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing alternating 1s and 0s
        for (int j = 1; j <= i; j++) {
            // Print 1 if the position is odd, 0 if even
            if ((i + j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
