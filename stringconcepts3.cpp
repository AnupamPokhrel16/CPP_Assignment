//Write a C++ program to find the largest word in a given string
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str;
    string word, largestWord;
    int maxLength = 0;

    // Ask for user input
    cout << "Enter a string: ";
    getline(cin, str);  // Using getline to allow spaces in the string

    // Use stringstream to split the string into words
    stringstream ss(str);

    // Traverse through each word in the string
    while (ss >> word) {
        // Check if the current word is larger than the largest word found so far
        if (word.length() > maxLength) {
            maxLength = word.length();
            largestWord = word;
        }
    }

    // Output the largest word
    cout << "Largest word: " << largestWord << endl;

    return 0;
}
