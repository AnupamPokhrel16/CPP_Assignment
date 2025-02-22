//Write a C++ program that swaps two variables without using a third variable.
#include <string>
#include <iostream>

using namespace std;
int main(){

int a= 10, b =20;
cout<< "before swapping a=" <<a<<",b =" <<b;
a = a+b;
b = a-b;
a = a-b;
cout<< "after swapping a="<< a<<"b ="<<b; 

    return 0;
}