#include <iostream>
#include <string>
using namespace std;

int stringtoint (string str, int total);
string reversestring (string str);
int reverseint (int num);

int main() {
    string str, reversestr;
    int num, reversenum, total, i;
    bool isnum;
    cout << "Enter a word or number: " << endl;
    getline (cin, str);

    total = str.length();

    isnum = true;
    for (i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            isnum = false;
        }
    }
    if (isnum) {
        num = stringtoint(str, total);
        reversenum = reverseint(num);
        cout << "Reversed number is: " << reversenum << endl;
    } else {
        reversestr = reversestring(str);
        cout << "Reversed word is: " << reversestr << endl;
    }
}

//-----------------FUNCTIONS----------------
int stringtoint (string str, int total) {
    int num, i;
    num = 0;
    for (i = 0; i < total; i ++) {
        num = num * 10 + str[i] - 48;
    }
    return num;
}

string reversestring (string str) {
    int i, total;
    string reverse;
    reverse = "";
    total = str.length();
    for (i = total-1; i >= 0; i--) {
        reverse = reverse + str[i];
    }
    return reverse;
}

int reverseint (int num) {
    int temp, reverse, digit;
    temp = num; 
    reverse = 0;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp/10;
    }
    return reverse;
}