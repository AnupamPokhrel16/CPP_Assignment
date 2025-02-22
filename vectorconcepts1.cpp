//Write a C++ program that returns the elements in a vector that are strictly smaller  than their adjacent left and right neighbours. 
#include <iostream>
#include <vector>
using namespace std;

vector<int> findLocalMinima(const vector<int>& arr) {
    vector<int> result;
    int n = arr.size();

    if (n < 3) {
        return result; // Not enough elements to have local minima
    }

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 5, 0, 3, 1, 7};

    vector<int> minima = findLocalMinima(arr);

    cout << "Vector elements that are smaller than their adjacent neighbours: ";
    for (int num : minima) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
