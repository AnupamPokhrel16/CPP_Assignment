//Write a C++ program to find the smallest element missing from a sorted array. 
#include <iostream>
using namespace std;

int findSmallestMissingElement(int arr[], int n) {
    // If the first element is greater than 1, then 1 is the missing element
    if (arr[0] > 1) {
        return 1;
    }

    // Traverse the array and find the first missing element
    for (int i = 0; i < n - 1; i++) {
        // If the difference between consecutive elements is more than 1, the missing element is found
        if (arr[i + 1] - arr[i] > 1) {
            return arr[i] + 1;
        }
    }

    // If no missing element is found, the smallest missing element is the next number after the last element
    return arr[n - 1] + 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findSmallestMissingElement(arr, n);
    cout << "The smallest missing element is: " << missingElement << endl;

    return 0;
}
