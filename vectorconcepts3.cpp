//Write a C++ program that takes a vector of strings and returns only those strings that  contain a number(s). Return an empty vector if none. 
#include <iostream>
#include <vector>
#include <cctype> // for isdigit()
using namespace std;

// Function to check if a string contains at least one number
bool containsNumber(const string& str) {
    for (char ch : str) {
        if (isdigit(ch)) {
            return true;
        }
    }
    return false;
}

// Function to find strings that contain numbers
vector<string> findStringsWithNumbers(const vector<string>& words) {
    vector<string> result;
    for (const string& word : words) {
        if (containsNumber(word)) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    vector<string> words = {"red", "green23", "1black", "white"};

    vector<string> filteredWords = findStringsWithNumbers(words);

    cout << "Find strings that contain a number(s) from the said vector: ";
    if (filteredWords.empty()) {
        cout << "None";
    } else {
        for (const string& word : filteredWords) {
            cout << word << " ";
        }
    }
    cout << endl;

    return 0;
}
