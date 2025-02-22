//Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + … up to ‘n’ terms. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    int sum = 0, currentTerm = 1;

    for (int i = 1; i <= n; i++) {
        sum += currentTerm;
        currentTerm = currentTerm * 10 + 1;  // Generate the next term in the series (e.g., 1, 11, 111, ...)
    }

    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
