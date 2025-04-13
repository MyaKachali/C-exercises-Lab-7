// Rectangle.cpp
#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

// Destructor
Rectangle::~Rectangle() {
    // Nothing to clean up for now
}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::getArea() const {
    return length * width;
}