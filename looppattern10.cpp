// Write a program in C++ to display the pyramid pattern using the alphabet.
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        char ch = 'A';  // Start character

        // Inner loop for spaces before the alphabet in each row
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // First half of the alphabet sequence (increasing)
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++; // Increment character
        }

        // Second half of the alphabet sequence (decreasing)
        ch--; // Decrement to the last printed character
        for (int j = 1; j < i; j++) {
            ch--;
            cout << ch << " ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
