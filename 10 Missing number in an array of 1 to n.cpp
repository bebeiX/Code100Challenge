#include <iostream>
using namespace std;

int arr[] = {1, 2, 6, 3, 5};
int num, expectedSum, arraysize, actualsum, missingnum, i;

int main() {
    num = 6;

    // Calculate expected sum using formula: (n * (n +1))/2
    expectedSum = (num * (num+1)) / 2;

    // Calculate actual sum. The array has 5 elements (size = n-1)
    actualsum = 0;
    arraysize = 5;
    for (i = 0; i < arraysize; i ++) {
        actualsum = actualsum + 1;
    }

    missingnum = expectedSum - actualsum;

    cout << "The missing number is: " << missingnum << endl;
}