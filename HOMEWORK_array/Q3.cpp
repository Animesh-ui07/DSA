//Write a function to print all unique values in array TOOK HELP FROM AI
#include <iostream>
using namespace std ;

void printonlyonce (int arr [] , int sz) {
    for (int i = 0 ; i<sz ; i++) {
        int count = 0 ;

        for (int j = 0 ; j<sz ; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

}

int main () {
    int arr[] = {2,3,3,1,4,6,7,7,8,9};
    int sz = 10;
    
    cout << "Elements only appearing onece are "  << endl;
    printonlyonce(arr , sz);
    return 0;
}