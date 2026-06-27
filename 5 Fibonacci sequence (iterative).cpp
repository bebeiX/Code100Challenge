#include <iostream>
using namespace std;

int i, total; 
int fibo[20];

int main() {
//intiate the first two numbers in the array
    fibo[0] = 0;
    fibo[1] = 1;
    total = 20;
    for (i = 2; i < total; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << "The fibonacci sequence is: ";
    for (i = 0; i < total; i++) {
        cout << " " << fibo[i];
    }
}