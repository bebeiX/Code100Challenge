#include <iostream>
#include <string>
using namespace std;

int num, temp, pass, i;
int data[100];  

int main() {
    num = 10;                  //setting it to 10 numbers
    for(i = 0; i < num; i++) {          //Loop to load the array
        cout << "Enter a number: ";
        cin >> data[i];
    }
    for (pass = 0; pass < num; pass++) {
        for (i = 0; i < num-1; i++) {
            if (data[i] > data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
    cout << "The sorted array is: ";
    for (i = 0; i < num; i++) {
        cout << data[i] << ", ";
    }
    cout << endl;
}