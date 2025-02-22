//Write a program in C++ to find the last prime number that occurs before the entered  number. 
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
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Find the last prime number before the entered number
    for (int i = num - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << "The last prime number before " << num << " is " << i << endl;
            return 0;
        }
    }
    
    cout << "No prime number found before " << num << endl;
    return 0;
}
