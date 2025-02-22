//3. Write a C++ program to swap the first and last digits of any number.
#include <string>
#include <iostream>
#include <cmath>

using namespace std;
int main() {
  int number, originalNumber, firstDigit, lastDigit, digits, swappedNumber;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Find the last digit
    lastDigit = number % 10;

    // Find the number of digits
    digits = (int)log10(number);

    // Find the first digit
    firstDigit = (int)(number / pow(10, digits));

    // Remove the first digit
    number = number % (int)pow(10, digits);

    // Remove the last digit
    number = number / 10;

    // Construct the swapped number
    swappedNumber = lastDigit * (int)pow(10, digits) + number * 10 + firstDigit;

    // Output the result
    cout << "Original Number: " << originalNumber << endl;
    cout << "Number after swapping first and last digits: " << swappedNumber << endl;

    return 0;
}
