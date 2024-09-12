#include <iostream>
#include <vector>
using namespace std;

vector<string> below_20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                           "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
vector<string> thousands = {"", "Thousand", "Million", "Billion"};

string numberToWordsHelper(int num) {
    if (num == 0) return "";
    if (num < 20) return below_20[num] + " ";
    if (num < 100) return tens[num / 10] + " " + numberToWordsHelper(num % 10);
    return below_20[num / 100] + " Hundred " + numberToWordsHelper(num % 100);
}

string numberToWords(int num) {
    if (num == 0) return "Zero";
    
    string result = "";
    int i = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            result = numberToWordsHelper(num % 1000) + thousands[i] + " " + result;
        }
        num /= 1000;
        i++;
    }

    while (result.back() == ' ') {
        result.pop_back();  // Remove any trailing spaces
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    cout << "In words: " << numberToWords(num) << endl;

    return 0;
}