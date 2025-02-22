//. Write a C++ program to add up all the digits between two given integers. Add all the  digits between 11 and 16 and it should be inclusive of the two numbers. 
//Example: Add up all the digits between 39 and 41 is: 21 
#include <iostream>
using namespace std;

int sumDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number %10; // Add the last digit to the sum
        number /= 10;      // Remove the last digit
    }
    return sum;
}

int main() {
    int num1, num2;
    int totalSum = 0;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Ensure num1 is the smaller number
    if (num1 > num2) {
        swap(num1, num2);
    }

    // Iterate through all numbers between num1 and num2 (inclusive)
    for (int i = num1; i <= num2; i++) {
        totalSum += sumDigits(i); // Add the sum of digits of the current number
    }

    // Output the result
    cout << "The sum of all digits between " << num1 << " and " << num2 << " is: " << totalSum << endl;

    return 0;
}