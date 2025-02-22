//Write a C++ program to find the largest three elements in an array. 
#include <iostream>
#include <climits>
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array must have at least three elements." << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    // Traverse the array
    for (int i = 0; i < n; i++) {
        // Update the largest, second largest, and third largest
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: ";
    cout << first << ", " << second << ", " << third << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, n);

    return 0;
}