//Write a C++ program to convert a given non-negative integer into English words
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        vector<string> units = {"", "Thousand", "Million", "Billion"};
        string result = "";
        int unitIndex = 0;
        
        while (num > 0) {
            int chunk = num % 1000;
            if (chunk != 0) {
                string chunkWords = convertChunk(chunk);
                result = chunkWords + " " + units[unitIndex] + " " + result;
            }
            num /= 1000;
            unitIndex++;
        }
        
        // Remove any trailing spaces
        result.erase(result.find_last_not_of(' ') + 1);
        return result;
    }
    
private:
    string convertChunk(int num) {
        if (num == 0) return "";
        
        vector<string> belowTwenty = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        
        string result = "";
        if (num >= 100) {
            result += belowTwenty[num / 100] + " Hundred ";
            num %= 100;
        }
        
        if (num >= 20) {
            result += tens[num / 10] + " ";
            num %= 10;
        } else if (num >= 10) {
            result += belowTwenty[num] + " ";
            num = 0;
        }
        
        if (num > 0) {
            result += belowTwenty[num] + " ";
        }
        
        // Remove any trailing spaces
        result.erase(result.find_last_not_of(' ') + 1);
        return result;
    }
};

int main() {
    Solution solution;
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    
    string words = solution.numberToWords(num);
    cout << "In words: " << words << endl;
    
    return 0;
}