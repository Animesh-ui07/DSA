//Write A function to swap max min elements in an array
#include <iostream>
#include <climits>
using namespace std ;

int smallest (int arr[], int sz) {
    int minVal = INT_MAX;
   
    for (int i= 0 ; i<sz ; i++) {
        if ( arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int largest (int arr[], int sz) {
    int maxVal = INT_MIN;

    for (int i = 0 ; i<sz ; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal ;
}

int main () {
    int arr[] = {2,3,4};
    int sz = 3;

    int ma = largest(arr , sz);
    int mi = smallest(arr , sz);
    cout << "Largest =" << ma << endl;
    cout << "Smallest =" << mi << endl;
    swap (ma , mi);

    cout << "After swapping variables: ma" << ma << ", mi = " << mi << endl;
    return 0;
}