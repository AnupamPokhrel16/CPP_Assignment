// Write a C++ program to count the number of days between two given dates. Date Format -> YYYY-MM-DD 
//Days between 2022/01/31 to 2022/01/01 = 30 Days between 2000/01/31 to 2019/02/01 = 6938 Days between 1980/05/31 to 1995/12/12 = 5677
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month for a given year
int daysInMonth(int year, int month) {
    // Days in months for non-leap years
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // If February and it's a leap year, return 29 days
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    return daysInMonth[month - 1];
}

// Function to convert a date to the total number of days since year 0
int dateToDays(int year, int month, int day) {
    int days = 0;

    // Add days for all years before the current year
    for (int y = 0; y < year; ++y) {
        days += isLeapYear(y) ? 366 : 365;
    }

    // Add days for all months before the current month in the current year
    for (int m = 1; m < month; ++m) {
        days += daysInMonth(year, m);
    }

    // Add the days of the current month
    days += day;

    return days;
}

// Function to parse a date string in the format YYYY-MM-DD
void parseDate(const string &dateStr, int &year, int &month, int &day) {
    stringstream ss(dateStr);
    char dash;

    ss >> year >> dash >> month >> dash >> day;
}

int main() {
    string date1Str, date2Str;

    // Input two dates in the format YYYY-MM-DD
    cout << "Enter the first date (YYYY-MM-DD): ";
    cin >> date1Str;
    cout << "Enter the second date (YYYY-MM-DD): ";
    cin >> date2Str;

    int year1, month1, day1;
    int year2, month2, day2;

    // Parse the input dates
    parseDate(date1Str, year1, month1, day1);
    parseDate(date2Str, year2, month2, day2);

    // Convert both dates to the total number of days since year 0
    int days1 = dateToDays(year1, month1, day1);
    int days2 = dateToDays(year2, month2, day2);

    // Calculate the absolute difference in days between the two dates
    int diffDays = abs(days2 - days1);

    // Output the result
    cout << "Days between " << date1Str << " to " << date2Str << " = " << diffDays << endl;

    return 0;
}