#include <iostream>
using namespace std;

int i;

int main () {
    for (i = 0; i <= 100; i++) {        //Start of the 1 to 100 loop
        if (i % 3 == 0 && i % 5 == 0) {         //Check to see if divisible by 3 or 5
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {                //Check to see if divisible by 3
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {                //Check to see if divisible by 5
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;                  //Otherwise print the number
        }
    }    
}