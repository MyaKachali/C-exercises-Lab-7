#include <iostream>
using namespace std;

// This function swaps two integers using reference parameters
void SwapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl; // should print 25
    cout << "varB before swap: " << varB << endl; // should print 100

    SwapNumbers(varA, varB); // swapping using reference

    cout << "varA after swap: " << varA << endl; // should print 100
    cout << "varB after swap: " << varB << endl; // should print 25

    return 0;
}