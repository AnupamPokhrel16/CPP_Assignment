// Write a C++ program to compute the number of days in a month for a given year and  month. 
//Input Year: 2019 
//Input Month: 04 
//Number of days of the year 2019 and month 4 is: 30 
#include <iostream>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4,
    // but not divisible by 100 unless also divisible by 400.
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month/year
int getDaysInMonth(int year, int month) {
    // Days in months for non-leap years
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // If the month is February and it's a leap year, return 29 days
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    // Return the number of days based on the month
    return daysInMonth[month - 1];
}

int main() {
    int year, month;

    // Input year and month from the user
    cout << "Input Year: ";
    cin >> year;
    cout << "Input Month: ";
    cin >> month;

    // Validate the input month (should be between 1 and 12)
    if (month < 1 || month > 12) {
        cout << "Invalid month entered. Please enter a value between 1 and 12." << endl;
        return 1;  // Exit with error code
    }

    // Get the number of days in the specified month and year
    int days = getDaysInMonth(year, month);

    // Output the result
    cout << "Number of days of the year " << year << " and month " << month << " is: " << days << endl;

    return 0;
}