// Write a program in C++ to convert a decimal number to a binary number.
#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    if (decimal == 0) return "0";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    cout << "Binary equivalent of " << decimal << " is " << decimalToBinary(decimal) << endl;
    
    return 0;
}
