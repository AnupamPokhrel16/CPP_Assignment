// Write a C++ program to check if a given string is a Palindrome or not. A palindrome is a word, number, phrase, or other sequence of characters which  reads the same backward as forward, such as madam, racecar. 
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    // Convert the string to lowercase to make the check case-insensitive
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }

    // Compare characters from both ends towards the center
    while (start < end) {
        if (str[start] != str[end]) {
            return false; // If characters don't match, it's not a palindrome
        }
        start++;
        end--;
    }
    return true; // If all characters match, it's a palindrome
}

int main() {
    string str;

    // Ask for user input
    cout << "Enter a string: ";
    getline(cin, str);  // Using getline to allow spaces in the string

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
