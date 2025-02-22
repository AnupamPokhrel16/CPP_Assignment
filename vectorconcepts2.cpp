//rite a C++ program to capitalize the first character of each element of a given  string vector. Return the vector. 
#include <iostream>
#include <vector>
#include <cctype> // for toupper
using namespace std;

vector<string> capitalizeFirstLetter(vector<string>& words) {
    for (string& word : words) {
        if (!word.empty()) {
            word[0] = toupper(word[0]); // Capitalize the first character
        }
    }
    return words;
}

int main() {
    vector<string> words = {"red", "green", "black", "white", "Pink"};

    vector<string> capitalizedWords = capitalizeFirstLetter(words);

    cout << "Capitalize the first character of each vector element: ";
    for (const string& word : capitalizedWords) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
