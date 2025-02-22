//Write a C++ program to capitalize the first letter of each word in a given string.  Words must be separated by only one space. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Ask for user input
    cout << "Enter a string: ";
    getline(cin, str);  // Using getline to allow spaces in the string

    bool newWord = true;  // Flag to indicate the start of a new word

    // Traverse through the string
    for (int i = 0; i < str.length(); i++) {
        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize the first letter of the word
            newWord = false;
        }
        else if (str[i] == ' ') {
            newWord = true;  // Set flag when a space is encountered, indicating the next word
        }
        else {
            str[i] = tolower(str[i]);  // Convert remaining letters to lowercase
        }
    }

    // Output the modified string
    cout << "String with capitalized first letters: " << str << endl;

    return 0;
}