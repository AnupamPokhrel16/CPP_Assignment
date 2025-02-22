#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int n, num;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input the list of numbers
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    // Sort the numbers in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Print the three highest numbers
    cout << "The three highest numbers are: ";
    for (int i = 0; i < 3 && i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}