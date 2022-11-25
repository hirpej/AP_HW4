#ifndef _PYRAMID_H_
#define _PYRAMID_H_

#include <iostream>
#include "3Dshape.h"
#include "triangle.h"

class Pyramid : public _3Dshape
{
public:
    Pyramid(double h, _2Dshape* base, size_t pharaoh);
    Pyramid(const Pyramid &p1);
    Pyramid(const Pyramid &&p2);
    Pyramid() = default;
    ~Pyramid() {
        std::cout << "destructor" << std::endl;
        delete[] pharaoh;
        };
    double volume() override;
    double area() override;
    friend std::ostream& operator<<(std::ostream& os, const Pyramid& p);

private:
    char* pharaoh;
};

#endif
