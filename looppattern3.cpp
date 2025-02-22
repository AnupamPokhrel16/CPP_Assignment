//Write a C++ program to make such a pattern like a right angle triangle with the  number increased by 1.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    int number = 1; // Starting number for the pattern

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number++; // Increment the number
        }
        cout << endl;
    }

    return 0;
}
