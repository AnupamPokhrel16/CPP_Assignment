//Write a C++ program to find the second largest element in an array of integers. 
#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1;  // Return -1 if there are less than two elements
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = arr[i];         // Update largest
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  // Update second largest
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
        return -1;  // Return -1 if there is no second largest element
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}