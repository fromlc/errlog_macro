//------------------------------------------------------------------------------
// Rectangle.cpp : class definition
//------------------------------------------------------------------------------
#include "errlog.h"

#include "Rectangle.h"

// default constructor instantiates unit rectangle
Rectangle::Rectangle() : width(1), length(1) { }

// overload constructor
Rectangle::Rectangle(double _width, double _length) :
    width(_width), length(_length) { }

// copy constructor
Rectangle::Rectangle(Rectangle& r) {
    this->width = r.width;
    this->length = r.length;
}

//------------------------------------------------------------------------------
// - if passed value >= 0, sets width and returns true
// - otherwise, width is NOT set and returns false
//------------------------------------------------------------------------------
bool Rectangle::setWidth(float w) {

    if (w >= 0) {
        width = w;
        return true;
    }

    ERRLOG("did not set width < 0");
    return false;
}

//------------------------------------------------------------------------------
// - if passed value >= 0, sets length and returns true
// - otherwise, length is NOT set and returns false
//------------------------------------------------------------------------------
bool Rectangle::setLength(float len) {

    if (len >= 0) {
        length = len;
        return true;
    }

    ERRLOG("did not set length < 0");
    return false;
}

//------------------------------------------------------------------------------
// returns value of member variable width
//------------------------------------------------------------------------------
double Rectangle::getWidth() const { return width; }

//------------------------------------------------------------------------------
// returns value of member variable length
//------------------------------------------------------------------------------
double Rectangle::getLength() const { return length; }

//------------------------------------------------------------------------------
// returns product of width times length
//------------------------------------------------------------------------------
double Rectangle::getArea() const { return width * length; } 