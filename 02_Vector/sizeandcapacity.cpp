#include <iostream>
#include <vector>
using namespace std ;

int main () {

    vector<int>vec;

    vec.push_back(24);
    vec.push_back(25);
    vec.push_back(35);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl; //capacity always gets doubled in vectors
    return 0;
}