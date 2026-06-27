#include <iostream>
using namespace std;

void findExtremes (int arr[], int size);

int main() {
    int i, total;
    int arr[10];
    total = 10;
    cout << "Enter 10 integer values ";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    findExtremes (arr, total);
    
}

//--------------------Fucntion-----------------
void findExtremes (int arr[], int size) {
    int minVal, maxVal, i;
//Need to assume that the first value in the array is max or min
    minVal = arr[0];
    maxVal = arr[0];
    
    for (i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];            //Largest
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << "The smallest value in the array is: " << minVal << endl;
    cout << "The largest value in the array is: " << maxVal << endl;
}