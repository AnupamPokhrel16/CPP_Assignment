//Write a C++ program to find a word in a given string that has the highest number of  repeated letters. 
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

// Function to calculate the number of repeated letters in a word
int countRepeatedLetters(const string &word) {
    unordered_map<char, int> letterCount;
    int repeatedCount = 0;

    // Count the occurrences of each letter
    for (char ch : word) {
        letterCount[ch]++;
    }

    // Count the repeated letters (letters that appear more than once)
    for (auto &entry : letterCount) {
        if (entry.second > 1) {
            repeatedCount += entry.second - 1; // Add only repeated occurrences
        }
    }

    return repeatedCount;
}

int main() {
    string str;
    string word, wordWithMaxRepeatedLetters;
    int maxRepeatedLetters = 0;

    // Ask for user input
    cout << "Enter a string: ";
    getline(cin, str);  // Using getline to allow spaces in the string

    // Use stringstream to split the string into words
    stringstream ss(str);

    // Traverse through each word in the string
    while (ss >> word) {
        // Count the repeated letters in the current word
        int repeatedLetters = countRepeatedLetters(word);

        // Update the word with the highest repeated letters
        if (repeatedLetters > maxRepeatedLetters) {
            maxRepeatedLetters = repeatedLetters;
            wordWithMaxRepeatedLetters = word;
        }
    }

    // Output the word with the highest repeated letters
    if (maxRepeatedLetters > 0) {
        cout << "The word with the highest number of repeated letters is: " << wordWithMaxRepeatedLetters << endl;
    } else {
        cout << "No word has repeated letters." << endl;
    }

    return 0;
}
