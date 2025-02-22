//. Write a C++ program to convert a binary number to a decimal number.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << "Decimal equivalent of " << binary << " is " << binaryToDecimal(binary) << endl;
    
    return 0;
}