#include <iostream>
#include <string>
using namespace std;

string reversestring (string str);
string removespaces (string str);

int main() {
    string word, reverse, temp;
    cout << "Enter a word or a number or a phrase: ";
    getline (cin, word);
    word = removespaces(word);
    reverse = reversestring(word);
    if (word == reverse) {
        cout << "Palindrome!!\n"; 
    } else {
        cout << "NOT a palindrome\n";
    }
}

string reversestring (string str) {
    int i, total;
    string reverse;
    reverse = ""; 
    total = str.length();
    for (i = total - 1; i >= 0; i--) {
        reverse = reverse + str[i];
    }
    return reverse;
}

string removespaces (string str) {
    int i;
    string result;
    result = "";
    for (i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result + result + str[i];
        }
    }
    return result;
}