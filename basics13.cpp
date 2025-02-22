//Write a C++ program to count prime numbers less than a given positive number.
#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    if (n <= 2) return 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) count++;
    }
    
    return count;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        cout << "Number of prime numbers less than " << num << " is " << countPrimes(num) << endl;
    }
    
    return 0;
}