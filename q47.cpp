#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

int countRepeatedLetters(const string& word) {
    unordered_map<char, int> letterCount;
    int maxRepeats = 0;

    for (char ch : word) {
        letterCount[ch]++;
        if (letterCount[ch] > 1) {
            maxRepeats++;
        }
    }
    return maxRepeats;
}

string wordWithMostRepeats(const string& str) {
    stringstream ss(str);
    string word, result;
    int maxRepeats = 0;

    while (ss >> word) {
        int repeats = countRepeatedLetters(word);
        if (repeats > maxRepeats) {
            maxRepeats = repeats;
            result = word;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string word = wordWithMostRepeats(input);
    if (!word.empty())
        cout << "Word with the highest number of repeated letters: " << word << endl;
    else
        cout << "No word found with repeated letters." << endl;

    return 0;
}