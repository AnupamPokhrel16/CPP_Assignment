//Write a program in C++ to find the number and sum of all integers between 100 and  200 which are divisible by 9. 
#include <iostream>
using namespace std;

int main() {
    int count = 0, sum = 0;

    cout << "Integers between 100 and 200 divisible by 9 are: ";

    // Iterate through numbers between 100 and 200
    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " ";
            count++; // Increment count for each number divisible by 9
            sum += i; // Add the number to the sum
        }
    }

    cout << endl;
    cout << "Total number of integers divisible by 9: " << count << endl;
    cout << "Sum of these integers: " << sum << endl;

    return 0;
}

