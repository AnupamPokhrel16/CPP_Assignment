// Write a C++ program to verify that all of the letters in the second string appear in the  first string as well. Return true otherwise false. 
#include <iostream>
#include <unordered_set>
using namespace std;

// Function to check if all letters in str2 appear in str1
bool containsAllLetters(const string& str1, const string& str2) {
    unordered_set<char> charSet(str1.begin(), str1.end()); // Store characters of str1 in a set

    for (char ch : str2) {
        if (charSet.find(ch) == charSet.end()) {
            return false; // If any character of str2 is not in str1, return false
        }
    }
    return true;
}

int main() {
    string str1 = "Python";
    string str2 = "Py";

    bool result = containsAllLetters(str1, str2);

    cout << "Check - First string contains all letters from second string: " 
         << (result ? "true" : "false") << endl;

    return 0;
}
