//Write a C++ program to reverse a string using recursion. 
#include <iostream>
#include <string>
using namespace std;

// Recursive function to reverse a string
string reverseString(string str) {
    if (str.empty()) {
        return str; // Base case: If the string is empty, return it
    }
    // Recursive case: Reverse the substring and append the first character at the end
    return reverseString(str.substr(1)) + str[0];
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = reverseString(str);

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
