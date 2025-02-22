//Write a C++ program to reverse a given string. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Ask for user input
    cout << "Enter a string: ";
    getline(cin, str); // Using getline to allow spaces in the string

    // Reverse the string
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]); // Swap characters
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
