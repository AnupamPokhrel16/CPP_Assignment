// Write a C++ program to implement a recursive function to check if a given string is a  palindrome 
#include <iostream>
#include <string>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true; // Base case: If start meets or exceeds end, it's a palindrome
    }
    if (str[start] != str[end]) {
        return false; // If characters at start and end don't match, it's not a palindrome
    }
    // Recursive case: Check the substring excluding the first and last characters
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
