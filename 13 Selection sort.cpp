#include <iostream>
#include <vector>
using namespace std;

void selectionsort (vector<int> & arr);
void printOut (vector<int> &arr);

int main() {
    vector<int> arr = {51, 59, 10, 159, 189, 11};           //Load some numbers into the vector
    cout << "The original array is: ";
    printOut(arr);

    selectionsort(arr);

    cout << "The sorted array is: ";
    printOut(arr);
}

//--------------------Functions----------------------
void selectionsort (vector<int> & arr) {
    int n, i, j, minI, temp;
    n = arr.size();
    for(i = 0; i < n; i++) {
        minI = i;                           //Need to assume that the current element is the minimum
        for(j = i + 1; j < n; j++) {        //Start of loop to go through and find minimum
            if(arr[j] < arr[minI]) {
                minI = j;                   // Upadate minI with the minimum once done
            }

        }
        temp = arr[i];                      //Need to swap the values to the correct position
        arr[i] = arr[minI];
        arr[minI] = temp;
    }
}

void printOut (vector<int> &arr){
    int i;
    for (i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}