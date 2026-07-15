#include <iostream>
using namespace std;

bool binarysearch (int first, int last, int search);
int loadsorteddata ();

int id[100];
int total, search, i;

int main() {
    total = loadsorteddata();
    cout << "What is the number you would like to search for? ";
    cin >> search;
    if (binarysearch(0, total -1, search)) {
        cout << "The number "<< search << " was found!";
    } else {
        cout << "The number " << search << " was NOT found!!";
    }
}

//-----------------Functions-----------------------
bool binarysearch (int first, int last, int search) {
int middle;

while (first <= last) {
    middle = ((last - first) / 2) + first;
    if (id[middle] == search) {
        return true;
    }else if (id[middle] > search){
        last = middle - 1;
    }else if (id[middle] < search) {
        first = middle + 1;
    } else {
        first = middle + 1;
    }
}
return false;
}

int loadsorteddata (){
    int num = 6;
    id[0] = 109;
    id[1] = 159;
    id[2] = 165;
    id[3] = 222;
    id[4] = 650;
    id[5] = 922;
    return num;
}