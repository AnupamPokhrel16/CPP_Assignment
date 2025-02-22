//. Write a C++ program to implement a recursive function to get the nth Fibonacci  number. 
#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: return n if n is 0 or 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: sum of the previous two Fibonacci numbers
}

int main() {
    int n;
    cout << "Enter a number to find the nth Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci number is not defined for negative integers." << endl;
    } else {
        cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    }

    return 0;
}
