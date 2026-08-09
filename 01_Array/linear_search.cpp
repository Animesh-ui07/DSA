#include <iostream>
using namespace std ;

int linearSearch(int arr[] , int sz , int target) {
    for (int i = 0 ; i<sz ; i++) {
        if (arr [i] == target) {
            return i;
        }
    }
    return -1;
}

int main () {
    int arr[] = {4,5,6,7,8} ;
    int sz = 5;
    int target = 7;

    cout << linearSearch(arr , sz , target) << endl;
    return 0;
}

