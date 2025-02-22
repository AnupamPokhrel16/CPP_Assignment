//Write a C++ program to list non-prime numbers from 1 to an upperbound
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int upperbound;
    cout << "Enter the upper bound: ";
    cin >> upperbound;

    cout << "Non-prime numbers from 1 to " << upperbound << " are: ";
    
    for (int i = 1; i <= upperbound; i++) {
        if (!isPrime(i)) {  // If the number is not prime
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
