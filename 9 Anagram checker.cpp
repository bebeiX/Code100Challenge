#include <iostream>
#include <string>
using namespace std;

string removespaces (string str);
string convertlowercase (string str);
string sortstring(string str);

int main() {
    string input1, input2, text1, text2; 
    cout << "Enter the first word or phrase: ";
    getline (cin, input1);
    cout << "Enter the second word or phrase to compare with: ";
    getline (cin, input2);

    text1 = removespaces(input1);
    text2 = removespaces(input2);
    
    text1 = convertlowercase(text1);
    text2 = convertlowercase(text2);
   
    text1 = sortstring(text1);
    text2 = sortstring(text2);

    if (text1 == text2) {
        cout << "Anagram!\n";
    } else {
        cout << "NOT an Anagram!\n";
    }
}
       

//--------------Functions---------
string removespaces (string str) {
    int i;
    string result;
    result = "";
    for (i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result = result + str[i];
        }
    }
    return result;
}

string convertlowercase (string str) {
    int i;
    for (i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

string sortstring(string str) {
    int num, pass, i;
    num = str.length();
    char temp;
      for ( pass = 0; pass < num; pass++) {
        for (i = 0; i < num-1; i ++) {
            if (str[i] > str[i+1]) {
                temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
            }
        }
    }
    return str;
}