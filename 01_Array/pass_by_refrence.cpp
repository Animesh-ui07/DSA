#include <iostream>
using namespace std ;

void changearray(int arr[] , int sz) {
    cout << "infunction\n";
    for (int i = 0 ; i<sz ; i++) {
        arr[i] = 2*arr[i];
    }
}

int main () {
    int arr[] = {23,46};
    
    changearray(arr , 2);
    int sz = 2;
    cout << "inmain\n";
    for (int i = 0 ; i<sz ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}