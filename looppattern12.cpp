//Write a program in C++ to display such a pattern for n number of rows using  numbers. There will be odd numbers in each row. The first and last number of each  row will be 1 and the middle column will be the row number. N numbers of columns  will appear in the 1st row. 
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = n; i >= 1; i--) {
        // Loop for printing the increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Loop for printing the decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
