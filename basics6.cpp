//Write a C++ program to compute the sum of the two given integers and count the  number of digits in the sum value.
#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}

int main() {
    int num1, num2, sum;

    // Input two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Compute the sum
    sum = num1 + num2;

    // Count the number of digits in the sum
    int digitCount = countDigits(sum);

    // Output the results
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "The number of digits in the sum is: " << digitCount << endl;

    return 0;
}