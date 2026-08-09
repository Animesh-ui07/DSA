#include <iostream>
#include <climits>
using namespace std ;

int main (){
    int nums[] = {2,3,41,0};
    int size = 4;

    int smallest = INT_MAX;
    for (int i = 0 ; i<size ; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
 
    }
    cout << "smallest=" << smallest << endl;
    return 0;
}