//------------------------------------------------------------------------------
// app.cpp
// 
// demos MY_DELETE macro based on StackOverflow at
// https://stackoverflow.com/questions/4190703/is-it-safe-to-delete-a-null-pointer/4190737#4190737
// 
// demos ERRLOG macro using trivial Divide class and simple Rectangle class
//------------------------------------------------------------------------------
#include "errlog.h"

#include "Divide.h"
#include "Rectangle.h"

//------------------------------------------------------------------------------
// local macros
//------------------------------------------------------------------------------
#define MY_DELETE(p) { delete p; p = nullptr; }

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

// demo MY_DELETE macro
    Rectangle* pRect = new Rectangle;
    MY_DELETE(pRect);

// demo ERRLOG macro
    ERRLOG("before Divide");

    Divide d(3, 0);

    Rectangle r;
    r.setWidth(-1);

    return 0;
}
