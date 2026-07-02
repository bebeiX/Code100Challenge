#include <iostream>
using namespace std;

int primenum (int num);

int main() {
    int a, b, i;
    cout << "Enter a range that you would like to know the prime numbers in (eg: 1 to 100): ";
    cin >> a >> b;
    for (i = a; i <= b; i++) {
        if (primenum(i)) {
            cout << i << " ";
        }
    }
}

int primenum (int num ) {
    int x, i;
    if (num < 2) {
        return 0;
    } else {
        x = num / 2;
        for (i = 2; i < x; i ++) {
            if (num % i == 0) {
               return 0; 
            }
        }
    }
    return 1;
}