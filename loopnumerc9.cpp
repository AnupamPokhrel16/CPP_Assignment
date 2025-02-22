// Write a program in C++ to display the numbers in reverse order.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number up to which you want to display in reverse order: ";
    cin >> n;

    cout << "Numbers in reverse order from " << n << " to 1 are: ";
    
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
