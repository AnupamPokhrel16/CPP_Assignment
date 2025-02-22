//Write a C++ program to implement a recursive function to find the sum of all prime  numbers in a given range. 
#include <iostream>
using namespace std;

// Helper function to check if a number is prime
bool isPrime(int num, int div = 2) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (div * div > num) {
        return true; // If no divisor is found, it's prime
    }
    if (num % div == 0) {
        return false; // If divisible by div, it's not prime
    }
    return isPrime(num, div + 1); // Check with the next divisor
}

// Recursive function to calculate the sum of primes in a given range
int sumPrimes(int start, int end) {
    if (start > end) {
        return 0; // Base case: if start exceeds end, return 0
    }

    int currentSum = 0;
    if (isPrime(start)) {
        currentSum = start; // Add to sum if the current number is prime
    }

    // Recursive call to check the next number
    return currentSum + sumPrimes(start + 1, end);
}

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    int primeSum = sumPrimes(start, end);
    cout << "Sum of prime numbers in the range [" << start << ", " << end << "] is: " << primeSum << endl;

    return 0;
}
