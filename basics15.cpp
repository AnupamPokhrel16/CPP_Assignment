//Write a program in C++ to enter any number and print all factors of the number. 
#include <iostream>

using namespace std;

void printFactors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printFactors(num);
    }
    
    return 0;
}
