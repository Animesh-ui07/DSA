#include <iostream>
#include <vector>
using namespace std ;

int main () {
    vector<int>vec = {1,2,3};
    cout << "Vector is" << endl;
    for (int num: vec) {
        cout << num << endl;
    }
    return 0;
}