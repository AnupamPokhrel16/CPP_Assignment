//Write a C++ program that removes a specific character from a given string. Return  the updated string. 
#include <iostream>
#include <string>

std::string removeCharacter(std::string str, char ch) {
    int index = 0;
    while ((index = str.find(ch, index)) != std::string::npos) {
        str.erase(index, 1);
    }
    return str;
}

int main() {
    std::string str1 = "Filename";
    char ch1 = 'e';
    std::cout << "Updated String: " << removeCharacter(str1, ch1) << std::endl;

    std::string str2 = "Compilation Time";
    char ch2 = 'i';
    std::cout << "Updated String: " << removeCharacter(str2, ch2) << std::endl;

    return 0;
}
