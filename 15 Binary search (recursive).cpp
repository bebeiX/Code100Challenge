#include <iostream>
using namespace std;


int binarysearch (int first, int last, int search);
int loadsorteddata();

int id[100];
int total, search, i;

int main() {
    total = loadsorteddata();
    cout << "Enter the number you are search for ";
    cin >> search;
    i = binarysearch(0, total - 1, search);
    if (i == -1){
        cout << "The number " << search << " is not in the array.\n";
    } else {
        cout << "The number " << search << " is at index " << i << endl;
    }
}

//------------------Functions------------------
int binarysearch (int first, int last, int search) {
    int middle, result;
    if (first > last) {
        return -1;          //Base case
    }
    result = -1;
    middle = (first + last) /2;
    if (search == id[middle]) {
        result = middle;
    } else if ( search > id[middle]) {
        result = binarysearch (middle + 1, last, search);
    } else if ( search < id[middle]){
        result = binarysearch (first, middle - 1, search); 
    }
    return result;
}

int loadsorteddata(){
    int num = 6;
    id[0] = 109;
    id[1] = 159;
    id[2] = 165;
    id[3] = 222;
    id[4] = 650;
    id[5] = 922;
    return num;
}
