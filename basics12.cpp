//Write a C++ program to compute the square root of a given non-negative integer.  Return type should be an integer. 
#include <iostream>
#include <cmath>

using namespace std;

int integerSquareRoot(int n) {
    if (n < 0) return -1; // Invalid input for negative numbers
    return static_cast<int>(sqrt(n));
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
    } else {
        cout << "Square root (integer part) of " << num << " is " << integerSquareRoot(num) << endl;
    }
    
    return 0;
}
