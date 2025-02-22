//Write a C++ program to update every array element by multiplication of the next and  previous values of a given array of integers. 
#include <iostream>
#include <vector>
using namespace std;

void updateArray(int arr[], int n) {
    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return;
    }

    // Store the original first and last elements
    int first = arr[0];
    int last = arr[n - 1];

    // Create a temporary array to store the updated values
    vector<int> updatedArr(n);

    // Update the first element (it only has the next element)
    updatedArr[0] = arr[0] * arr[1];

    // Update the last element (it only has the previous element)
    updatedArr[n - 1] = arr[n - 2] * arr[n - 1];

    // Update the middle elements (product of previous and next elements)
    for (int i = 1; i < n - 1; i++) {
        updatedArr[i] = arr[i - 1] * arr[i + 1];
    }

    // Copy the updated values back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = updatedArr[i];
    }
}

int main() {
    int arr[] = {2, 3, 5, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    updateArray(arr, n);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
