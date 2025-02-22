#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the date
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to set the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to get the day
    int getDay() const {
        return day;
    }

    // Function to get the month
    int getMonth() const {
        return month;
    }

    // Function to get the year
    int getYear() const {
        return year;
    }

    // Function to check if the year is a leap year
    bool isLeapYear() const {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

    // Function to validate the date
    bool isValidDate() const {
        // Check if the month is valid
        if (month < 1 || month > 12) {
            return false;
        }

        // Check if the day is valid based on the month and year
        if (day < 1) {
            return false;
        }

        // Days in each month
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // If it is a leap year, February has 29 days
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }

        // Check if the day is valid for the given month
        if (day > daysInMonth[month - 1]) {
            return false;
        }

        return true;
    }

    // Function to display the date
    void displayDate() const {
        if (isValidDate()) {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid date!" << endl;
        }
    }
};

int main() {
    int day, month, year;

    // Input date
    cout << "Enter day, month, and year: ";
    cin >> day >> month >> year;

    // Create a Date object
    Date date(day, month, year);

    // Display the date and check if it is valid
    date.displayDate();

    return 0;
}
