#include <iostream>
#include <climits>
using namespace std;

int main () {
    int nums[]={2,3,4};
    int size = 3;

    int smallest = INT_MAX;
    for (int i = 0 ; i<size ; i++) {
        smallest = min(nums[i] , smallest);
    }
    cout << "smallest =" << smallest << endl;
    return 0;
}