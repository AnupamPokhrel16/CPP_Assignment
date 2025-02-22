//Write a C++ program to check if a given integer is a power of three or not.
#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    
    // Take log base 3 and check if the result is an integer
    double logRes = log10(n) / log10(3);
    return (logRes == floor(logRes));
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (isPowerOfThree(num)) {
        cout << num << " is a power of three." << endl;
    } else {
        cout << num << " is not a power of three." << endl;
    }
    
    return 0;
}