#include <iostream>
#include <climits>
using namespace std ;

int main () {
    int nums[] = {3,4,6};
    int size = 3;

    int largest = INT_MIN;
    for (int i = 0 ; i<size ; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    cout << "Largest =" << largest << endl;
    return 0;
}