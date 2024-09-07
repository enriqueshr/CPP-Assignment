#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string largestWord;
    int maxLength = 0;

    int start = 0;
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if(word.length() > maxLength) {
                maxLength = word.length();
                largestWord = word;
            }
            start = i + 1;
        }
    }

    cout << "Largest word: " << largestWord << endl;

    return 0;
}