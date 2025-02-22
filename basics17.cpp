// Write a program in C++ to find the two's complement of a binary number.
#include <iostream>
#include <string>

using namespace std;

string onesComplement(string binary) {
    for (char &bit : binary) {
        bit = (bit == '0') ? '1' : '0';
    }
    return binary;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << "One's complement of " << binary << " is " << onesComplement(binary) << endl;
    
    return 0;
}