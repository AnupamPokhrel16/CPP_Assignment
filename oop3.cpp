//Write a C++ program to implement a class called Student that has private member  variables for name, class, roll number, and marks. Include member functions to  calculate the grade based on the marks and display the student's information. 
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize student details
    Student(string name, string studentClass, int rollNumber, float marks) {
        this->name = name;
        this->studentClass = studentClass;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }

    // Function to calculate grade based on marks
    string calculateGrade() const {
        if (marks >= 90) {
            return "A+";
        } else if (marks >= 80) {
            return "A";
        } else if (marks >= 70) {
            return "B";
        } else if (marks >= 60) {
            return "C";
        } else if (marks >= 50) {
            return "D";
        } else {
            return "F";
        }
    }

    // Function to display student details
    void displayDetails() const {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }

    // Function to get marks
    float getMarks() const {
        return marks;
    }
};

int main() {
    string name, studentClass;
    int rollNumber;
    float marks;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter class: ";
    getline(cin, studentClass);
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;

    // Create a Student object
    Student student(name, studentClass, rollNumber, marks);

    // Display student details and grade
    student.displayDetails();

    return 0;
}
