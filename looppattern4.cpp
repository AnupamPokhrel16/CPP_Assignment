//Write a C++ program to make such a pattern like a pyramid with an asterisk
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Loop to print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Loop to print stars in each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}
