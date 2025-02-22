// Write a C++ program to add repeatedly all digits of a given non-negative number  until the result has only one digit. 
#include <iostream>
using namespace std;

// Function to calculate the digital root using the mathematical formula
int digitalRootFormula(int num) {
    if (num == 0) return 0; // Special case for 0
    return 1 + (num - 1) % 9;
}

// Function to calculate the digital root using an iterative approach
int digitalRootIterative(int num) {
    while (num >= 10) { // Continue until the number has only one digit
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Extract the last digit and add to sum
            num /= 10;       // Remove the last digit
        }
        num = sum; // Update num with the new sum
    }
    return num;
}

int main() {
    int number;

    // Input a non-negative number
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    // Calculate the digital root using the formula
    int resultFormula = digitalRootFormula(number);

    // Calculate the digital root using the iterative approach
    int resultIterative = digitalRootIterative(number);

    // Output the results
    cout << "Digital root (using formula): " << resultFormula << endl;
    cout << "Digital root (using iteration): " << resultIterative << endl;

    return 0;
}