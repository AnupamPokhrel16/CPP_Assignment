//Write a C++ program to print a pattern in which the highest number of columns  appears in the first row. 
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for printing numbers in each row
        for (int j = i; j <= n; j++) {
            cout << j;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}