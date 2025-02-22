//Write a program in C++ to calculate the product of the digits of any number
#include <iostream>

using namespace std;

int productOfDigits(int n) {
    if (n == 0) return 0;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    return product;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Product of the digits of " << num << " is " << productOfDigits(abs(num)) << endl;
    
    return 0;
}
