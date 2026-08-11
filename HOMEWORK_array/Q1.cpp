//write a fucntion to sum and prodcut of elements in array 
#include <iostream>
using namespace std;

int sum (int arr[], int sz) {
    int sum = 0 ;
    for (int i = 0 ; i<sz ; i++) {
        sum = sum+arr[i];
    }
    return sum ;
}

int product(int arr[],int sz) {
    int product = 1;
    for (int i = 0 ; i<sz ; i++) {
        product = product*arr[i];
    }
    return product;
}

int main () {
    int arr[]={2,3,4};
    int size = 3;
    int s = sum(arr , size);
    int p = product(arr , size);

    cout << "sum =" << s << endl;
    cout << "product =" << p << endl;
    return 0;
}