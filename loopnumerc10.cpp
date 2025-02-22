// Write a C++ program to find the sum of an A.P. series.
#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    
    cout << "Enter the first term (a) of the A.P.: ";
    cin >> a;
    
    cout << "Enter the common difference (d) of the A.P.: ";
    cin >> d;
    
    cout << "Enter the number of terms (n): ";
    cin >> n;

    // Formula for the sum of an A.P. series: S_n = n/2 * (2a + (n-1) * d)
    int sum = (n / 2) * (2 * a + (n - 1) * d);

    cout << "The sum of the first " << n << " terms of the A.P. series is: " << sum << endl;

    return 0;
}
