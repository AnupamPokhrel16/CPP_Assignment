//. Write a program in C++ to find the perfect numbers between 1 and 500. 
#include <iostream>

using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num && num != 1;
}

int main() {
    cout << "Perfect numbers between 1 and 500 are: ";
    for (int i = 1; i <= 500; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
