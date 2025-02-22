// Write a C++ program to find the sum of all elements in an array using recursion. 
#include <iostream>
using namespace std;

// Recursive function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    if (size == 0) {
        return 0; // Base case: if size is 0, return 0
    }
    return arr[size - 1] + sumArray(arr, size - 1); // Recursive step
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = sumArray(arr, n);
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
