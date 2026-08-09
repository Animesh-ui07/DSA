#include <iostream>
using namespace std;

int main () {
    const int size = 5; // marked const for general c++ compatibility
    int marks[size];

    for (int i = 0 ; i<size ; i++) {
        cin >> marks[i];
    }
    cout << "Your marks\n";
    for (int i = 0 ; i<size ; i++) {
        cout << marks[i] << endl;
    }
    
    return 0;
}