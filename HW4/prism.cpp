#include "prism.h"

Prism::Prism(double h, _2Dshape *base)
{
    height = h;
    this->base = base;
}

double Prism::volume()
{
    return ((base->area()) * height);
}

double Prism::area()
{
    return ((2 * base->area()) + 4 * (height * sqrt(base->area())));
}

std::ostream &operator<<(std::ostream &os, const Prism &p)
{
    os << "base of prism is square and its height is " << p.height << std::endl;
    return os;
}