//Write a C++ program that accepts the user's first and last name and prints them in
//reverse order with a space between them.
#include <iostream>
#include <string>
using namespace std;

int main (){

string first, second;
cout<< "enter first name";
cin>> first;
cout <<"enter second name";
cin >> second;
cout << "the reverse name is "<<second<<" "<<first;
return 0;
}
