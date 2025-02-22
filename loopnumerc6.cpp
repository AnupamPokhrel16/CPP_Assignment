//. Write a program in C++ to display the cube of the number up to an integer.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Cube of numbers from 1 to " << n << " are:" << endl;

    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        cout << "Cube of " << i << " is: " << cube << endl;
    }

    return 0;
}
