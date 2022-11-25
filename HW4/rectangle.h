#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <iostream>
#include "2Dshape.h"

class Rectangle : public _2Dshape
{
public:
    Rectangle(double l, double w);
    void disp() override;
    double perimeter() override;
    double area() override;
    // double get_width() {return width;};
    // double get_lenght() {return length;};
    // double check() {return 12;};
    
private:
    double length;
    double width;
};

#endif
