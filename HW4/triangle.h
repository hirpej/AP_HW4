#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>
#include <math.h>
#include "2Dshape.h"

class Triangle : public _2Dshape
{
public:
    Triangle(double b, double s);
    void disp() override;
    double perimeter() override;
    double area() override;
    // double get_side() {return side;};
    // double get_base() {return base;};
    // double check() {return 10;};
    
private:
    double side;
    double base;
};

#endif
