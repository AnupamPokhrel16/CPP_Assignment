//For n = 10, write a C++ program that reads the integer n and prints its factorial.
#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    // Read the integer n
    std::cout << "Enter an integer n: ";
    std::cin >> n;

    // Check if n is non-negative
    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate and print the factorial of n
        unsigned long long fact = factorial(n);
        std::cout << "Factorial of " << n << " is: " << fact << std::endl;
    }

    return 0;
}