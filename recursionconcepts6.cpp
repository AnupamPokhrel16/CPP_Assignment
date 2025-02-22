//Write a C++ program to implement a recursive function to calculate the sum of even  and odd numbers in a given range. 
#include <iostream>
using namespace std;

// Recursive function to calculate sum of even and odd numbers in a given range
void sumEvenOdd(int start, int end, int& evenSum, int& oddSum) {
    if (start > end) {
        return; // Base case: if start exceeds end, return
    }
    
    if (start % 2 == 0) {
        evenSum += start; // Add to even sum if the number is even
    } else {
        oddSum += start; // Add to odd sum if the number is odd
    }

    sumEvenOdd(start + 1, end, evenSum, oddSum); // Recursive call with the next number
}

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    int evenSum = 0, oddSum = 0;
    sumEvenOdd(start, end, evenSum, oddSum);

    cout << "Sum of even numbers in the range: " << evenSum << endl;
    cout << "Sum of odd numbers in the range: " << oddSum << endl;

    return 0;
}
