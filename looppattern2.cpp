// Write a program in C++ to display the pattern like right angle triangle with number.
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
