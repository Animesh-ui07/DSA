#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int>vec = {1,2,4,5};
    cout << "size = " << vec.size() << endl;
    for (int val : vec) {
        cout << val << endl;
    }
    return 0;
}