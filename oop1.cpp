#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(string name, int employeeID, double salary) {
        this->name = name;
        this->employeeID = employeeID;
        this->salary = salary;
    }

    // Function to set the salary based on performance
    void setSalary(double performanceRating) {
        if (performanceRating >= 4.5) {
            salary += 1000; // Excellent performance
        } else if (performanceRating >= 3.5) {
            salary += 500; // Good performance
        } else {
            salary += 200; // Average performance
        }
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Salary: $" << salary << endl;
    }

    // Function to get the current salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    string name;
    int employeeID;
    double salary, performanceRating;

    // Input employee details
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter initial salary: $";
    cin >> salary;

    // Create an Employee object
    Employee emp(name, employeeID, salary);

    // Input performance rating and adjust salary
    cout << "Enter performance rating (1.0 to 5.0): ";
    cin >> performanceRating;
    emp.setSalary(performanceRating);

    // Display employee details
    emp.displayDetails();

    return 0;
}
