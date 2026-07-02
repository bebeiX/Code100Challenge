#include <iostream>
using namespace std;

int num, temp, pass, i, diff;
int data [100];

int main() {
    num = 5;
    
    // Enter data into the array
    for (i = 0; i < num; i++) {
        cout << "Enter a number: ";
        cin >> data[i];
    }

    // bubble sort the data first
    for ( pass = 0; pass < num; pass++) {
        for (i = 0; i < num-1; i ++) {
            if (data[i] > data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
    //Display the current array as a DEBUG
    cout << "The sorted array is ";
    for (i = 0; i < num; i ++) {
        cout << data[i] << ", ";
    }
    cout << endl;

    //Remove duplicates from the array 
    for (i = 0; i < num; i++) {
        if (data[i] != data[diff - 1]) {
            data[diff] = data[i];
            diff++;
        }
    }

    //Display new array with duplicates removed
    cout << "The array with duplicates removed: ";
    for (i = 0; i < diff; i ++) {
        cout << data[i] << ", ";
    }
    cout << endl;
}