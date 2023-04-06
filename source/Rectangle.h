//------------------------------------------------------------------------------
// Rectangle.h : class declaration
//------------------------------------------------------------------------------
#pragma once

//------------------------------------------------------------------------------
// Rectangle
//------------------------------------------------------------------------------
class Rectangle {
   private:
      double width;
      double length;

   public:
       Rectangle();
       Rectangle(double, double);
       Rectangle(Rectangle&);

      bool setWidth(float);
      bool setLength(float);
      double getWidth() const;
      double getLength() const;
      double getArea() const;
};
