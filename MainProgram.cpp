// main.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rect;

    float len, wid;

    // Get user input
    cout << "Enter the length: ";
    cin >> len;

    cout << "Enter the width: ";
    cin >> wid;

    // Set values using the class methods
    rect.setLength(len);
    rect.setWidth(wid);

    // Output the area
    cout << "The area of the rectangle is: " << rect.getArea() << endl;

    return 0;
}