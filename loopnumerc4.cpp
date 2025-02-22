//Write a program in C++ to display the first n terms of the Fibonacci series. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    int a = 0, b = 1; // First two terms of the Fibonacci series

    cout << "Fibonacci Series: ";
    
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int nextTerm = a + b; // Calculate the next term
        a = b; // Update a for the next term
        b = nextTerm; // Update b for the next term
    }

    cout << endl;
    return 0;
}
